// fichero 20662 -- macros y constantes -- MODIFICADO
#define LIMITE_20662 20862
#define FACTOR_20662 4

int aplicar_limite20662(int valor) {
    if (valor > LIMITE_20662) return LIMITE_20662;
    return valor * FACTOR_20662;
}
