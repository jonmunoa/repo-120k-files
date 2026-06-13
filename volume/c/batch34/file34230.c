// fichero 34230 -- macros y constantes
#define LIMITE_34230 34330
#define FACTOR_34230 1

int aplicar_limite34230(int valor) {
    if (valor > LIMITE_34230) return LIMITE_34230;
    return valor * FACTOR_34230;
}
