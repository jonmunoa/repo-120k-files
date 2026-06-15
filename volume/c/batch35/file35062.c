// fichero 35062 -- macros y constantes -- MODIFICADO
#define LIMITE_35062 35262
#define FACTOR_35062 4

int aplicar_limite35062(int valor) {
    if (valor > LIMITE_35062) return LIMITE_35062;
    return valor * FACTOR_35062;
}
