// fichero 47122 -- macros y constantes -- MODIFICADO
#define LIMITE_47122 47322
#define FACTOR_47122 4

int aplicar_limite47122(int valor) {
    if (valor > LIMITE_47122) return LIMITE_47122;
    return valor * FACTOR_47122;
}
