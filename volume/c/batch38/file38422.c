// fichero 38422 -- macros y constantes
#define LIMITE_38422 38522
#define FACTOR_38422 3

int aplicar_limite38422(int valor) {
    if (valor > LIMITE_38422) return LIMITE_38422;
    return valor * FACTOR_38422;
}
