// fichero 40110 -- macros y constantes
#define LIMITE_40110 40210
#define FACTOR_40110 1

int aplicar_limite40110(int valor) {
    if (valor > LIMITE_40110) return LIMITE_40110;
    return valor * FACTOR_40110;
}
