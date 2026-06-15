// fichero 23062 -- macros y constantes -- MODIFICADO
#define LIMITE_23062 23262
#define FACTOR_23062 4

int aplicar_limite23062(int valor) {
    if (valor > LIMITE_23062) return LIMITE_23062;
    return valor * FACTOR_23062;
}
