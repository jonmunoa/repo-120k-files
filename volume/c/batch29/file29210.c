// fichero 29210 -- macros y constantes
#define LIMITE_29210 29310
#define FACTOR_29210 1

int aplicar_limite29210(int valor) {
    if (valor > LIMITE_29210) return LIMITE_29210;
    return valor * FACTOR_29210;
}
