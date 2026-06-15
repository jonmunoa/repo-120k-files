// fichero 25030 -- macros y constantes -- MODIFICADO
#define LIMITE_25030 25230
#define FACTOR_25030 2

int aplicar_limite25030(int valor) {
    if (valor > LIMITE_25030) return LIMITE_25030;
    return valor * FACTOR_25030;
}
