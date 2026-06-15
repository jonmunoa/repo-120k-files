// fichero 43666 -- macros y constantes -- MODIFICADO
#define LIMITE_43666 43866
#define FACTOR_43666 3

int aplicar_limite43666(int valor) {
    if (valor > LIMITE_43666) return LIMITE_43666;
    return valor * FACTOR_43666;
}
