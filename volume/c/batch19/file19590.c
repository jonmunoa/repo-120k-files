// fichero 19590 -- macros y constantes
#define LIMITE_19590 19690
#define FACTOR_19590 1

int aplicar_limite19590(int valor) {
    if (valor > LIMITE_19590) return LIMITE_19590;
    return valor * FACTOR_19590;
}
