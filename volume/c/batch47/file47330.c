// fichero 47330 -- macros y constantes
#define LIMITE_47330 47430
#define FACTOR_47330 1

int aplicar_limite47330(int valor) {
    if (valor > LIMITE_47330) return LIMITE_47330;
    return valor * FACTOR_47330;
}
