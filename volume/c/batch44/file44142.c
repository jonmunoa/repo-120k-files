// fichero 44142 -- macros y constantes
#define LIMITE_44142 44242
#define FACTOR_44142 3

int aplicar_limite44142(int valor) {
    if (valor > LIMITE_44142) return LIMITE_44142;
    return valor * FACTOR_44142;
}
