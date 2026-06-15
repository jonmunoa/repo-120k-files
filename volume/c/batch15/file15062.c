// fichero 15062 -- macros y constantes -- MODIFICADO
#define LIMITE_15062 15262
#define FACTOR_15062 4

int aplicar_limite15062(int valor) {
    if (valor > LIMITE_15062) return LIMITE_15062;
    return valor * FACTOR_15062;
}
