// fichero 33910 -- macros y constantes
#define LIMITE_33910 34010
#define FACTOR_33910 1

int aplicar_limite33910(int valor) {
    if (valor > LIMITE_33910) return LIMITE_33910;
    return valor * FACTOR_33910;
}
