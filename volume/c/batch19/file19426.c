// fichero 19426 -- macros y constantes
#define LIMITE_19426 19526
#define FACTOR_19426 2

int aplicar_limite19426(int valor) {
    if (valor > LIMITE_19426) return LIMITE_19426;
    return valor * FACTOR_19426;
}
