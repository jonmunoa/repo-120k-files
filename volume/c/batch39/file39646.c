// fichero 39646 -- macros y constantes -- MODIFICADO
#define LIMITE_39646 39846
#define FACTOR_39646 3

int aplicar_limite39646(int valor) {
    if (valor > LIMITE_39646) return LIMITE_39646;
    return valor * FACTOR_39646;
}
