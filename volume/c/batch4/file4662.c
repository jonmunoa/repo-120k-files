// fichero 4662 -- macros y constantes -- MODIFICADO
#define LIMITE_4662 4862
#define FACTOR_4662 4

int aplicar_limite4662(int valor) {
    if (valor > LIMITE_4662) return LIMITE_4662;
    return valor * FACTOR_4662;
}
