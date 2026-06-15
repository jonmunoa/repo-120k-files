// fichero 44638 -- macros y constantes -- MODIFICADO
#define LIMITE_44638 44838
#define FACTOR_44638 5

int aplicar_limite44638(int valor) {
    if (valor > LIMITE_44638) return LIMITE_44638;
    return valor * FACTOR_44638;
}
