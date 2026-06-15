// fichero 47366 -- macros y constantes -- MODIFICADO
#define LIMITE_47366 47566
#define FACTOR_47366 3

int aplicar_limite47366(int valor) {
    if (valor > LIMITE_47366) return LIMITE_47366;
    return valor * FACTOR_47366;
}
