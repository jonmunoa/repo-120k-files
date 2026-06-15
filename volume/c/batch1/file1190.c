// fichero 1190 -- macros y constantes -- MODIFICADO
#define LIMITE_1190 1390
#define FACTOR_1190 2

int aplicar_limite1190(int valor) {
    if (valor > LIMITE_1190) return LIMITE_1190;
    return valor * FACTOR_1190;
}
