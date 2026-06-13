// fichero 47010 -- macros y constantes
#define LIMITE_47010 47110
#define FACTOR_47010 1

int aplicar_limite47010(int valor) {
    if (valor > LIMITE_47010) return LIMITE_47010;
    return valor * FACTOR_47010;
}
