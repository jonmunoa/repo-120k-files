// fichero 19270 -- macros y constantes -- MODIFICADO
#define LIMITE_19270 19470
#define FACTOR_19270 2

int aplicar_limite19270(int valor) {
    if (valor > LIMITE_19270) return LIMITE_19270;
    return valor * FACTOR_19270;
}
