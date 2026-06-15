// fichero 25638 -- macros y constantes -- MODIFICADO
#define LIMITE_25638 25838
#define FACTOR_25638 5

int aplicar_limite25638(int valor) {
    if (valor > LIMITE_25638) return LIMITE_25638;
    return valor * FACTOR_25638;
}
