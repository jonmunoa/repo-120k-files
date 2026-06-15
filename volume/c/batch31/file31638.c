// fichero 31638 -- macros y constantes -- MODIFICADO
#define LIMITE_31638 31838
#define FACTOR_31638 5

int aplicar_limite31638(int valor) {
    if (valor > LIMITE_31638) return LIMITE_31638;
    return valor * FACTOR_31638;
}
