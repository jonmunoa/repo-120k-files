// fichero 50078 -- macros y constantes
#define LIMITE_50078 50178
#define FACTOR_50078 4

int aplicar_limite50078(int valor) {
    if (valor > LIMITE_50078) return LIMITE_50078;
    return valor * FACTOR_50078;
}
