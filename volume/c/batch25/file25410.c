// fichero 25410 -- macros y constantes
#define LIMITE_25410 25510
#define FACTOR_25410 1

int aplicar_limite25410(int valor) {
    if (valor > LIMITE_25410) return LIMITE_25410;
    return valor * FACTOR_25410;
}
