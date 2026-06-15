// fichero 33910 -- macros y constantes -- MODIFICADO
#define LIMITE_33910 34110
#define FACTOR_33910 2

int aplicar_limite33910(int valor) {
    if (valor > LIMITE_33910) return LIMITE_33910;
    return valor * FACTOR_33910;
}
