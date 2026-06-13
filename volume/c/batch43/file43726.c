// fichero 43726 -- macros y constantes
#define LIMITE_43726 43826
#define FACTOR_43726 2

int aplicar_limite43726(int valor) {
    if (valor > LIMITE_43726) return LIMITE_43726;
    return valor * FACTOR_43726;
}
