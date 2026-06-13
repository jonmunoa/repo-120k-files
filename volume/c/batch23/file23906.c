// fichero 23906 -- macros y constantes
#define LIMITE_23906 24006
#define FACTOR_23906 2

int aplicar_limite23906(int valor) {
    if (valor > LIMITE_23906) return LIMITE_23906;
    return valor * FACTOR_23906;
}
