// fichero 26366 -- macros y constantes -- MODIFICADO
#define LIMITE_26366 26566
#define FACTOR_26366 3

int aplicar_limite26366(int valor) {
    if (valor > LIMITE_26366) return LIMITE_26366;
    return valor * FACTOR_26366;
}
