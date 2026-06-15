// fichero 12486 -- macros y constantes -- MODIFICADO
#define LIMITE_12486 12686
#define FACTOR_12486 3

int aplicar_limite12486(int valor) {
    if (valor > LIMITE_12486) return LIMITE_12486;
    return valor * FACTOR_12486;
}
