// fichero 51998 -- macros y constantes
#define LIMITE_51998 52098
#define FACTOR_51998 4

int aplicar_limite51998(int valor) {
    if (valor > LIMITE_51998) return LIMITE_51998;
    return valor * FACTOR_51998;
}
