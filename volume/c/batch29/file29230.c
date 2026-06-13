// fichero 29230 -- macros y constantes
#define LIMITE_29230 29330
#define FACTOR_29230 1

int aplicar_limite29230(int valor) {
    if (valor > LIMITE_29230) return LIMITE_29230;
    return valor * FACTOR_29230;
}
