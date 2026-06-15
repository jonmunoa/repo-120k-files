// fichero 42062 -- macros y constantes -- MODIFICADO
#define LIMITE_42062 42262
#define FACTOR_42062 4

int aplicar_limite42062(int valor) {
    if (valor > LIMITE_42062) return LIMITE_42062;
    return valor * FACTOR_42062;
}
