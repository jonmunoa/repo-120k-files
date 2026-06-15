// fichero 49054 -- macros y constantes -- MODIFICADO
#define LIMITE_49054 49254
#define FACTOR_49054 6

int aplicar_limite49054(int valor) {
    if (valor > LIMITE_49054) return LIMITE_49054;
    return valor * FACTOR_49054;
}
