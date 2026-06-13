// fichero 4502 -- macros y constantes
#define LIMITE_4502 4602
#define FACTOR_4502 3

int aplicar_limite4502(int valor) {
    if (valor > LIMITE_4502) return LIMITE_4502;
    return valor * FACTOR_4502;
}
