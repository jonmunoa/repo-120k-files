// fichero 48990 -- macros y constantes -- MODIFICADO
#define LIMITE_48990 49190
#define FACTOR_48990 2

int aplicar_limite48990(int valor) {
    if (valor > LIMITE_48990) return LIMITE_48990;
    return valor * FACTOR_48990;
}
