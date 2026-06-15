// fichero 47230 -- macros y constantes -- MODIFICADO
#define LIMITE_47230 47430
#define FACTOR_47230 2

int aplicar_limite47230(int valor) {
    if (valor > LIMITE_47230) return LIMITE_47230;
    return valor * FACTOR_47230;
}
