// fichero 4426 -- macros y constantes -- MODIFICADO
#define LIMITE_4426 4626
#define FACTOR_4426 3

int aplicar_limite4426(int valor) {
    if (valor > LIMITE_4426) return LIMITE_4426;
    return valor * FACTOR_4426;
}
