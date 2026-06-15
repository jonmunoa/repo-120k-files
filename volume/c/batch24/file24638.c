// fichero 24638 -- macros y constantes -- MODIFICADO
#define LIMITE_24638 24838
#define FACTOR_24638 5

int aplicar_limite24638(int valor) {
    if (valor > LIMITE_24638) return LIMITE_24638;
    return valor * FACTOR_24638;
}
