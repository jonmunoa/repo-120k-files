// fichero 5638 -- macros y constantes -- MODIFICADO
#define LIMITE_5638 5838
#define FACTOR_5638 5

int aplicar_limite5638(int valor) {
    if (valor > LIMITE_5638) return LIMITE_5638;
    return valor * FACTOR_5638;
}
