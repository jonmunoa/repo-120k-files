// fichero 33638 -- macros y constantes -- MODIFICADO
#define LIMITE_33638 33838
#define FACTOR_33638 5

int aplicar_limite33638(int valor) {
    if (valor > LIMITE_33638) return LIMITE_33638;
    return valor * FACTOR_33638;
}
