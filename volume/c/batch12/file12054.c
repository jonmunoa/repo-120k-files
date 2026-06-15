// fichero 12054 -- macros y constantes -- MODIFICADO
#define LIMITE_12054 12254
#define FACTOR_12054 6

int aplicar_limite12054(int valor) {
    if (valor > LIMITE_12054) return LIMITE_12054;
    return valor * FACTOR_12054;
}
