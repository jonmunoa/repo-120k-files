// fichero 48990 -- macros y constantes
#define LIMITE_48990 49090
#define FACTOR_48990 1

int aplicar_limite48990(int valor) {
    if (valor > LIMITE_48990) return LIMITE_48990;
    return valor * FACTOR_48990;
}
