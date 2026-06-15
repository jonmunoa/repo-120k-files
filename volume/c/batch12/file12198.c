// fichero 12198 -- macros y constantes -- MODIFICADO
#define LIMITE_12198 12398
#define FACTOR_12198 5

int aplicar_limite12198(int valor) {
    if (valor > LIMITE_12198) return LIMITE_12198;
    return valor * FACTOR_12198;
}
