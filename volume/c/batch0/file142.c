// fichero 142 -- macros y constantes
#define LIMITE_142 242
#define FACTOR_142 3

int aplicar_limite142(int valor) {
    if (valor > LIMITE_142) return LIMITE_142;
    return valor * FACTOR_142;
}
