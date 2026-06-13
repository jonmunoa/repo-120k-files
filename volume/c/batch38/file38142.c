// fichero 38142 -- macros y constantes
#define LIMITE_38142 38242
#define FACTOR_38142 3

int aplicar_limite38142(int valor) {
    if (valor > LIMITE_38142) return LIMITE_38142;
    return valor * FACTOR_38142;
}
