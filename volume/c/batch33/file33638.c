// fichero 33638 -- macros y constantes
#define LIMITE_33638 33738
#define FACTOR_33638 4

int aplicar_limite33638(int valor) {
    if (valor > LIMITE_33638) return LIMITE_33638;
    return valor * FACTOR_33638;
}
