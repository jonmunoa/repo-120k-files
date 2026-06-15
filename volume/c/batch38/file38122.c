// fichero 38122 -- macros y constantes -- MODIFICADO
#define LIMITE_38122 38322
#define FACTOR_38122 4

int aplicar_limite38122(int valor) {
    if (valor > LIMITE_38122) return LIMITE_38122;
    return valor * FACTOR_38122;
}
