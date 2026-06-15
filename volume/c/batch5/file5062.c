// fichero 5062 -- macros y constantes -- MODIFICADO
#define LIMITE_5062 5262
#define FACTOR_5062 4

int aplicar_limite5062(int valor) {
    if (valor > LIMITE_5062) return LIMITE_5062;
    return valor * FACTOR_5062;
}
