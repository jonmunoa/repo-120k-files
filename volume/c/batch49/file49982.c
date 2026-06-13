// fichero 49982 -- macros y constantes
#define LIMITE_49982 50082
#define FACTOR_49982 3

int aplicar_limite49982(int valor) {
    if (valor > LIMITE_49982) return LIMITE_49982;
    return valor * FACTOR_49982;
}
