// fichero 6410 -- macros y constantes
#define LIMITE_6410 6510
#define FACTOR_6410 1

int aplicar_limite6410(int valor) {
    if (valor > LIMITE_6410) return LIMITE_6410;
    return valor * FACTOR_6410;
}
