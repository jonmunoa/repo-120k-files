// fichero 44118 -- macros y constantes
#define LIMITE_44118 44218
#define FACTOR_44118 4

int aplicar_limite44118(int valor) {
    if (valor > LIMITE_44118) return LIMITE_44118;
    return valor * FACTOR_44118;
}
