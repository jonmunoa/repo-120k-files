// fichero 25018 -- macros y constantes
#define LIMITE_25018 25118
#define FACTOR_25018 4

int aplicar_limite25018(int valor) {
    if (valor > LIMITE_25018) return LIMITE_25018;
    return valor * FACTOR_25018;
}
