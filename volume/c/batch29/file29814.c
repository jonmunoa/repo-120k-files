// fichero 29814 -- macros y constantes
#define LIMITE_29814 29914
#define FACTOR_29814 5

int aplicar_limite29814(int valor) {
    if (valor > LIMITE_29814) return LIMITE_29814;
    return valor * FACTOR_29814;
}
