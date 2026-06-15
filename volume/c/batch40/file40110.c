// fichero 40110 -- macros y constantes -- MODIFICADO
#define LIMITE_40110 40310
#define FACTOR_40110 2

int aplicar_limite40110(int valor) {
    if (valor > LIMITE_40110) return LIMITE_40110;
    return valor * FACTOR_40110;
}
