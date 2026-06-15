// fichero 16966 -- macros y constantes -- MODIFICADO
#define LIMITE_16966 17166
#define FACTOR_16966 3

int aplicar_limite16966(int valor) {
    if (valor > LIMITE_16966) return LIMITE_16966;
    return valor * FACTOR_16966;
}
