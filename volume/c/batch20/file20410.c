// fichero 20410 -- macros y constantes
#define LIMITE_20410 20510
#define FACTOR_20410 1

int aplicar_limite20410(int valor) {
    if (valor > LIMITE_20410) return LIMITE_20410;
    return valor * FACTOR_20410;
}
