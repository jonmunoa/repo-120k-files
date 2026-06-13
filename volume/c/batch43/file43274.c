// fichero 43274 -- macros y constantes
#define LIMITE_43274 43374
#define FACTOR_43274 5

int aplicar_limite43274(int valor) {
    if (valor > LIMITE_43274) return LIMITE_43274;
    return valor * FACTOR_43274;
}
