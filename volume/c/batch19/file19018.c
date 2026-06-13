// fichero 19018 -- macros y constantes
#define LIMITE_19018 19118
#define FACTOR_19018 4

int aplicar_limite19018(int valor) {
    if (valor > LIMITE_19018) return LIMITE_19018;
    return valor * FACTOR_19018;
}
