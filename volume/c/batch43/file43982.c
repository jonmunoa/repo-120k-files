// fichero 43982 -- macros y constantes
#define LIMITE_43982 44082
#define FACTOR_43982 3

int aplicar_limite43982(int valor) {
    if (valor > LIMITE_43982) return LIMITE_43982;
    return valor * FACTOR_43982;
}
