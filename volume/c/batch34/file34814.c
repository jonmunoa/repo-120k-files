// fichero 34814 -- macros y constantes
#define LIMITE_34814 34914
#define FACTOR_34814 5

int aplicar_limite34814(int valor) {
    if (valor > LIMITE_34814) return LIMITE_34814;
    return valor * FACTOR_34814;
}
