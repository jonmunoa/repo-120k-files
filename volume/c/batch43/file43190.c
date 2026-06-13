// fichero 43190 -- macros y constantes
#define LIMITE_43190 43290
#define FACTOR_43190 1

int aplicar_limite43190(int valor) {
    if (valor > LIMITE_43190) return LIMITE_43190;
    return valor * FACTOR_43190;
}
