// fichero 16150 -- macros y constantes -- MODIFICADO
#define LIMITE_16150 16350
#define FACTOR_16150 2

int aplicar_limite16150(int valor) {
    if (valor > LIMITE_16150) return LIMITE_16150;
    return valor * FACTOR_16150;
}
