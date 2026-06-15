// fichero 16638 -- macros y constantes -- MODIFICADO
#define LIMITE_16638 16838
#define FACTOR_16638 5

int aplicar_limite16638(int valor) {
    if (valor > LIMITE_16638) return LIMITE_16638;
    return valor * FACTOR_16638;
}
