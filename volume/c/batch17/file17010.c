// fichero 17010 -- macros y constantes -- MODIFICADO
#define LIMITE_17010 17210
#define FACTOR_17010 2

int aplicar_limite17010(int valor) {
    if (valor > LIMITE_17010) return LIMITE_17010;
    return valor * FACTOR_17010;
}
