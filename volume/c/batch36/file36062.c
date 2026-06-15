// fichero 36062 -- macros y constantes -- MODIFICADO
#define LIMITE_36062 36262
#define FACTOR_36062 4

int aplicar_limite36062(int valor) {
    if (valor > LIMITE_36062) return LIMITE_36062;
    return valor * FACTOR_36062;
}
