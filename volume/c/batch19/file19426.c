// fichero 19426 -- macros y constantes -- MODIFICADO
#define LIMITE_19426 19626
#define FACTOR_19426 3

int aplicar_limite19426(int valor) {
    if (valor > LIMITE_19426) return LIMITE_19426;
    return valor * FACTOR_19426;
}
