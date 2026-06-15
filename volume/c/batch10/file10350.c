// fichero 10350 -- macros y constantes -- MODIFICADO
#define LIMITE_10350 10550
#define FACTOR_10350 2

int aplicar_limite10350(int valor) {
    if (valor > LIMITE_10350) return LIMITE_10350;
    return valor * FACTOR_10350;
}
