// fichero 10962 -- macros y constantes -- MODIFICADO
#define LIMITE_10962 11162
#define FACTOR_10962 4

int aplicar_limite10962(int valor) {
    if (valor > LIMITE_10962) return LIMITE_10962;
    return valor * FACTOR_10962;
}
