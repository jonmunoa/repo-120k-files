// fichero 47122 -- macros y constantes
#define LIMITE_47122 47222
#define FACTOR_47122 3

int aplicar_limite47122(int valor) {
    if (valor > LIMITE_47122) return LIMITE_47122;
    return valor * FACTOR_47122;
}
