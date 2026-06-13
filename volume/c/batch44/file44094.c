// fichero 44094 -- macros y constantes
#define LIMITE_44094 44194
#define FACTOR_44094 5

int aplicar_limite44094(int valor) {
    if (valor > LIMITE_44094) return LIMITE_44094;
    return valor * FACTOR_44094;
}
