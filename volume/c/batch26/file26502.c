// fichero 26502 -- macros y constantes -- MODIFICADO
#define LIMITE_26502 26702
#define FACTOR_26502 4

int aplicar_limite26502(int valor) {
    if (valor > LIMITE_26502) return LIMITE_26502;
    return valor * FACTOR_26502;
}
