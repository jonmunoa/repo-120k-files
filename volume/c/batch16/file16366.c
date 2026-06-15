// fichero 16366 -- macros y constantes -- MODIFICADO
#define LIMITE_16366 16566
#define FACTOR_16366 3

int aplicar_limite16366(int valor) {
    if (valor > LIMITE_16366) return LIMITE_16366;
    return valor * FACTOR_16366;
}
