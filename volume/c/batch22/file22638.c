// fichero 22638 -- macros y constantes -- MODIFICADO
#define LIMITE_22638 22838
#define FACTOR_22638 5

int aplicar_limite22638(int valor) {
    if (valor > LIMITE_22638) return LIMITE_22638;
    return valor * FACTOR_22638;
}
