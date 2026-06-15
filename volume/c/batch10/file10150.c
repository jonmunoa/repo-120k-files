// fichero 10150 -- macros y constantes -- MODIFICADO
#define LIMITE_10150 10350
#define FACTOR_10150 2

int aplicar_limite10150(int valor) {
    if (valor > LIMITE_10150) return LIMITE_10150;
    return valor * FACTOR_10150;
}
