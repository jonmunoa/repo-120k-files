// fichero 230 -- macros y constantes -- MODIFICADO
#define LIMITE_230 430
#define FACTOR_230 2

int aplicar_limite230(int valor) {
    if (valor > LIMITE_230) return LIMITE_230;
    return valor * FACTOR_230;
}
