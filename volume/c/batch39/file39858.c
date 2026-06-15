// fichero 39858 -- macros y constantes -- MODIFICADO
#define LIMITE_39858 40058
#define FACTOR_39858 5

int aplicar_limite39858(int valor) {
    if (valor > LIMITE_39858) return LIMITE_39858;
    return valor * FACTOR_39858;
}
