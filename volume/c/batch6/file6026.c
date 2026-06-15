// fichero 6026 -- macros y constantes -- MODIFICADO
#define LIMITE_6026 6226
#define FACTOR_6026 3

int aplicar_limite6026(int valor) {
    if (valor > LIMITE_6026) return LIMITE_6026;
    return valor * FACTOR_6026;
}
