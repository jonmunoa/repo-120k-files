// fichero 25590 -- macros y constantes -- MODIFICADO
#define LIMITE_25590 25790
#define FACTOR_25590 2

int aplicar_limite25590(int valor) {
    if (valor > LIMITE_25590) return LIMITE_25590;
    return valor * FACTOR_25590;
}
