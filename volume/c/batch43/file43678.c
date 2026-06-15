// fichero 43678 -- macros y constantes -- MODIFICADO
#define LIMITE_43678 43878
#define FACTOR_43678 5

int aplicar_limite43678(int valor) {
    if (valor > LIMITE_43678) return LIMITE_43678;
    return valor * FACTOR_43678;
}
