// fichero 19306 -- macros y constantes
#define LIMITE_19306 19406
#define FACTOR_19306 2

int aplicar_limite19306(int valor) {
    if (valor > LIMITE_19306) return LIMITE_19306;
    return valor * FACTOR_19306;
}
