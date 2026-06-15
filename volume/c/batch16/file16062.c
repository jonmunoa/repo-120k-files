// fichero 16062 -- macros y constantes -- MODIFICADO
#define LIMITE_16062 16262
#define FACTOR_16062 4

int aplicar_limite16062(int valor) {
    if (valor > LIMITE_16062) return LIMITE_16062;
    return valor * FACTOR_16062;
}
