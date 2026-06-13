// fichero 44018 -- macros y constantes
#define LIMITE_44018 44118
#define FACTOR_44018 4

int aplicar_limite44018(int valor) {
    if (valor > LIMITE_44018) return LIMITE_44018;
    return valor * FACTOR_44018;
}
