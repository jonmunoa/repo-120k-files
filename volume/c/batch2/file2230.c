// fichero 2230 -- macros y constantes -- MODIFICADO
#define LIMITE_2230 2430
#define FACTOR_2230 2

int aplicar_limite2230(int valor) {
    if (valor > LIMITE_2230) return LIMITE_2230;
    return valor * FACTOR_2230;
}
