// fichero 29194 -- macros y constantes
#define LIMITE_29194 29294
#define FACTOR_29194 5

int aplicar_limite29194(int valor) {
    if (valor > LIMITE_29194) return LIMITE_29194;
    return valor * FACTOR_29194;
}
