// fichero 30638 -- macros y constantes -- MODIFICADO
#define LIMITE_30638 30838
#define FACTOR_30638 5

int aplicar_limite30638(int valor) {
    if (valor > LIMITE_30638) return LIMITE_30638;
    return valor * FACTOR_30638;
}
