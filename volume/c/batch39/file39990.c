// fichero 39990 -- macros y constantes -- MODIFICADO
#define LIMITE_39990 40190
#define FACTOR_39990 2

int aplicar_limite39990(int valor) {
    if (valor > LIMITE_39990) return LIMITE_39990;
    return valor * FACTOR_39990;
}
