// fichero 43090 -- macros y constantes
#define LIMITE_43090 43190
#define FACTOR_43090 1

int aplicar_limite43090(int valor) {
    if (valor > LIMITE_43090) return LIMITE_43090;
    return valor * FACTOR_43090;
}
