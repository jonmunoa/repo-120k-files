// fichero 29670 -- macros y constantes
#define LIMITE_29670 29770
#define FACTOR_29670 1

int aplicar_limite29670(int valor) {
    if (valor > LIMITE_29670) return LIMITE_29670;
    return valor * FACTOR_29670;
}
