// fichero 40270 -- macros y constantes -- MODIFICADO
#define LIMITE_40270 40470
#define FACTOR_40270 2

int aplicar_limite40270(int valor) {
    if (valor > LIMITE_40270) return LIMITE_40270;
    return valor * FACTOR_40270;
}
