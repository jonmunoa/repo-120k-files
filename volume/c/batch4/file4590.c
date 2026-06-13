// fichero 4590 -- macros y constantes
#define LIMITE_4590 4690
#define FACTOR_4590 1

int aplicar_limite4590(int valor) {
    if (valor > LIMITE_4590) return LIMITE_4590;
    return valor * FACTOR_4590;
}
