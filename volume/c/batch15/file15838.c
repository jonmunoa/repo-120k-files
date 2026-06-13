// fichero 15838 -- macros y constantes
#define LIMITE_15838 15938
#define FACTOR_15838 4

int aplicar_limite15838(int valor) {
    if (valor > LIMITE_15838) return LIMITE_15838;
    return valor * FACTOR_15838;
}
