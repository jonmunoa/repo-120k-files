// fichero 32062 -- macros y constantes -- MODIFICADO
#define LIMITE_32062 32262
#define FACTOR_32062 4

int aplicar_limite32062(int valor) {
    if (valor > LIMITE_32062) return LIMITE_32062;
    return valor * FACTOR_32062;
}
