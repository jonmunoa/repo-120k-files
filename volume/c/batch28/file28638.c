// fichero 28638 -- macros y constantes -- MODIFICADO
#define LIMITE_28638 28838
#define FACTOR_28638 5

int aplicar_limite28638(int valor) {
    if (valor > LIMITE_28638) return LIMITE_28638;
    return valor * FACTOR_28638;
}
