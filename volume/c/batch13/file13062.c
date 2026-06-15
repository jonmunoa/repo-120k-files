// fichero 13062 -- macros y constantes -- MODIFICADO
#define LIMITE_13062 13262
#define FACTOR_13062 4

int aplicar_limite13062(int valor) {
    if (valor > LIMITE_13062) return LIMITE_13062;
    return valor * FACTOR_13062;
}
