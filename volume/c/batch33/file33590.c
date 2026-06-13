// fichero 33590 -- macros y constantes
#define LIMITE_33590 33690
#define FACTOR_33590 1

int aplicar_limite33590(int valor) {
    if (valor > LIMITE_33590) return LIMITE_33590;
    return valor * FACTOR_33590;
}
