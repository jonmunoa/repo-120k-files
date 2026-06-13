// fichero 52518 -- macros y constantes
#define LIMITE_52518 52618
#define FACTOR_52518 4

int aplicar_limite52518(int valor) {
    if (valor > LIMITE_52518) return LIMITE_52518;
    return valor * FACTOR_52518;
}
