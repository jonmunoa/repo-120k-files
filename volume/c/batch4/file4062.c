// fichero 4062 -- macros y constantes -- MODIFICADO
#define LIMITE_4062 4262
#define FACTOR_4062 4

int aplicar_limite4062(int valor) {
    if (valor > LIMITE_4062) return LIMITE_4062;
    return valor * FACTOR_4062;
}
