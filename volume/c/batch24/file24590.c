// fichero 24590 -- macros y constantes
#define LIMITE_24590 24690
#define FACTOR_24590 1

int aplicar_limite24590(int valor) {
    if (valor > LIMITE_24590) return LIMITE_24590;
    return valor * FACTOR_24590;
}
