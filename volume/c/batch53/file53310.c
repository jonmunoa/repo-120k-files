// fichero 53310 -- macros y constantes
#define LIMITE_53310 53410
#define FACTOR_53310 1

int aplicar_limite53310(int valor) {
    if (valor > LIMITE_53310) return LIMITE_53310;
    return valor * FACTOR_53310;
}
