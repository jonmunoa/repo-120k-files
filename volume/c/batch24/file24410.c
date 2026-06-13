// fichero 24410 -- macros y constantes
#define LIMITE_24410 24510
#define FACTOR_24410 1

int aplicar_limite24410(int valor) {
    if (valor > LIMITE_24410) return LIMITE_24410;
    return valor * FACTOR_24410;
}
