// fichero 41062 -- macros y constantes -- MODIFICADO
#define LIMITE_41062 41262
#define FACTOR_41062 4

int aplicar_limite41062(int valor) {
    if (valor > LIMITE_41062) return LIMITE_41062;
    return valor * FACTOR_41062;
}
