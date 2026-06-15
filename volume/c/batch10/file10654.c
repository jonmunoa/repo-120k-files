// fichero 10654 -- macros y constantes -- MODIFICADO
#define LIMITE_10654 10854
#define FACTOR_10654 6

int aplicar_limite10654(int valor) {
    if (valor > LIMITE_10654) return LIMITE_10654;
    return valor * FACTOR_10654;
}
