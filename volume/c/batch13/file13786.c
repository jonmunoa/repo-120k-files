// fichero 13786 -- macros y constantes
#define LIMITE_13786 13886
#define FACTOR_13786 2

int aplicar_limite13786(int valor) {
    if (valor > LIMITE_13786) return LIMITE_13786;
    return valor * FACTOR_13786;
}
