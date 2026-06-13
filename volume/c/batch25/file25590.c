// fichero 25590 -- macros y constantes
#define LIMITE_25590 25690
#define FACTOR_25590 1

int aplicar_limite25590(int valor) {
    if (valor > LIMITE_25590) return LIMITE_25590;
    return valor * FACTOR_25590;
}
