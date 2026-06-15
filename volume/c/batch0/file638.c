// fichero 638 -- macros y constantes -- MODIFICADO
#define LIMITE_638 838
#define FACTOR_638 5

int aplicar_limite638(int valor) {
    if (valor > LIMITE_638) return LIMITE_638;
    return valor * FACTOR_638;
}
