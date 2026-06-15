// fichero 12638 -- macros y constantes -- MODIFICADO
#define LIMITE_12638 12838
#define FACTOR_12638 5

int aplicar_limite12638(int valor) {
    if (valor > LIMITE_12638) return LIMITE_12638;
    return valor * FACTOR_12638;
}
