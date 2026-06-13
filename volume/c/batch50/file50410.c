// fichero 50410 -- macros y constantes
#define LIMITE_50410 50510
#define FACTOR_50410 1

int aplicar_limite50410(int valor) {
    if (valor > LIMITE_50410) return LIMITE_50410;
    return valor * FACTOR_50410;
}
