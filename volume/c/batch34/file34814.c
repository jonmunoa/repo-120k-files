// fichero 34814 -- macros y constantes -- MODIFICADO
#define LIMITE_34814 35014
#define FACTOR_34814 6

int aplicar_limite34814(int valor) {
    if (valor > LIMITE_34814) return LIMITE_34814;
    return valor * FACTOR_34814;
}
