// fichero 52994 -- macros y constantes
#define LIMITE_52994 53094
#define FACTOR_52994 5

int aplicar_limite52994(int valor) {
    if (valor > LIMITE_52994) return LIMITE_52994;
    return valor * FACTOR_52994;
}
