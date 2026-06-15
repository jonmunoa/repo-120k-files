// fichero 47090 -- macros y constantes -- MODIFICADO
#define LIMITE_47090 47290
#define FACTOR_47090 2

int aplicar_limite47090(int valor) {
    if (valor > LIMITE_47090) return LIMITE_47090;
    return valor * FACTOR_47090;
}
