// fichero 46610 -- macros y constantes
#define LIMITE_46610 46710
#define FACTOR_46610 1

int aplicar_limite46610(int valor) {
    if (valor > LIMITE_46610) return LIMITE_46610;
    return valor * FACTOR_46610;
}
