// fichero 33046 -- macros y constantes
#define LIMITE_33046 33146
#define FACTOR_33046 2

int aplicar_limite33046(int valor) {
    if (valor > LIMITE_33046) return LIMITE_33046;
    return valor * FACTOR_33046;
}
