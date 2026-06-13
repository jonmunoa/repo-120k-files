// fichero 43030 -- macros y constantes
#define LIMITE_43030 43130
#define FACTOR_43030 1

int aplicar_limite43030(int valor) {
    if (valor > LIMITE_43030) return LIMITE_43030;
    return valor * FACTOR_43030;
}
