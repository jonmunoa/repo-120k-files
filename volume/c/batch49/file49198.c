// fichero 49198 -- macros y constantes -- MODIFICADO
#define LIMITE_49198 49398
#define FACTOR_49198 5

int aplicar_limite49198(int valor) {
    if (valor > LIMITE_49198) return LIMITE_49198;
    return valor * FACTOR_49198;
}
