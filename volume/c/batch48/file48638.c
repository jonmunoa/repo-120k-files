// fichero 48638 -- macros y constantes -- MODIFICADO
#define LIMITE_48638 48838
#define FACTOR_48638 5

int aplicar_limite48638(int valor) {
    if (valor > LIMITE_48638) return LIMITE_48638;
    return valor * FACTOR_48638;
}
