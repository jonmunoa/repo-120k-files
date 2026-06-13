// fichero 37518 -- macros y constantes
#define LIMITE_37518 37618
#define FACTOR_37518 4

int aplicar_limite37518(int valor) {
    if (valor > LIMITE_37518) return LIMITE_37518;
    return valor * FACTOR_37518;
}
