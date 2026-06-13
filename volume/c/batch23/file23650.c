// fichero 23650 -- macros y constantes
#define LIMITE_23650 23750
#define FACTOR_23650 1

int aplicar_limite23650(int valor) {
    if (valor > LIMITE_23650) return LIMITE_23650;
    return valor * FACTOR_23650;
}
