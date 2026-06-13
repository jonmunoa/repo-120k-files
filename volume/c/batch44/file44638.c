// fichero 44638 -- macros y constantes
#define LIMITE_44638 44738
#define FACTOR_44638 4

int aplicar_limite44638(int valor) {
    if (valor > LIMITE_44638) return LIMITE_44638;
    return valor * FACTOR_44638;
}
