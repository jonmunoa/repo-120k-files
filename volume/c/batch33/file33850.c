// fichero 33850 -- macros y constantes
#define LIMITE_33850 33950
#define FACTOR_33850 1

int aplicar_limite33850(int valor) {
    if (valor > LIMITE_33850) return LIMITE_33850;
    return valor * FACTOR_33850;
}
