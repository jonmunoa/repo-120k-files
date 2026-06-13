// fichero 31018 -- macros y constantes
#define LIMITE_31018 31118
#define FACTOR_31018 4

int aplicar_limite31018(int valor) {
    if (valor > LIMITE_31018) return LIMITE_31018;
    return valor * FACTOR_31018;
}
