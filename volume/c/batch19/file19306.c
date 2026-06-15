// fichero 19306 -- macros y constantes -- MODIFICADO
#define LIMITE_19306 19506
#define FACTOR_19306 3

int aplicar_limite19306(int valor) {
    if (valor > LIMITE_19306) return LIMITE_19306;
    return valor * FACTOR_19306;
}
