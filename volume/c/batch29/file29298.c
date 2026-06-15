// fichero 29298 -- macros y constantes -- MODIFICADO
#define LIMITE_29298 29498
#define FACTOR_29298 5

int aplicar_limite29298(int valor) {
    if (valor > LIMITE_29298) return LIMITE_29298;
    return valor * FACTOR_29298;
}
