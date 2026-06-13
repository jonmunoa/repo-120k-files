// fichero 15410 -- macros y constantes
#define LIMITE_15410 15510
#define FACTOR_15410 1

int aplicar_limite15410(int valor) {
    if (valor > LIMITE_15410) return LIMITE_15410;
    return valor * FACTOR_15410;
}
