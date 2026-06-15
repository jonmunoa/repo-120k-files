// fichero 35662 -- macros y constantes -- MODIFICADO
#define LIMITE_35662 35862
#define FACTOR_35662 4

int aplicar_limite35662(int valor) {
    if (valor > LIMITE_35662) return LIMITE_35662;
    return valor * FACTOR_35662;
}
