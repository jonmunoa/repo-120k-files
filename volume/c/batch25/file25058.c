// fichero 25058 -- macros y constantes -- MODIFICADO
#define LIMITE_25058 25258
#define FACTOR_25058 5

int aplicar_limite25058(int valor) {
    if (valor > LIMITE_25058) return LIMITE_25058;
    return valor * FACTOR_25058;
}
