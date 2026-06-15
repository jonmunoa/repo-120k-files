// fichero 44366 -- macros y constantes -- MODIFICADO
#define LIMITE_44366 44566
#define FACTOR_44366 3

int aplicar_limite44366(int valor) {
    if (valor > LIMITE_44366) return LIMITE_44366;
    return valor * FACTOR_44366;
}
