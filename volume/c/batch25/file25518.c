// fichero 25518 -- macros y constantes -- MODIFICADO
#define LIMITE_25518 25718
#define FACTOR_25518 5

int aplicar_limite25518(int valor) {
    if (valor > LIMITE_25518) return LIMITE_25518;
    return valor * FACTOR_25518;
}
