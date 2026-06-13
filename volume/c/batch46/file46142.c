// fichero 46142 -- macros y constantes
#define LIMITE_46142 46242
#define FACTOR_46142 3

int aplicar_limite46142(int valor) {
    if (valor > LIMITE_46142) return LIMITE_46142;
    return valor * FACTOR_46142;
}
