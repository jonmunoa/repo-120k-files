// fichero 15026 -- macros y constantes -- MODIFICADO
#define LIMITE_15026 15226
#define FACTOR_15026 3

int aplicar_limite15026(int valor) {
    if (valor > LIMITE_15026) return LIMITE_15026;
    return valor * FACTOR_15026;
}
