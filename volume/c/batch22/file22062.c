// fichero 22062 -- macros y constantes -- MODIFICADO
#define LIMITE_22062 22262
#define FACTOR_22062 4

int aplicar_limite22062(int valor) {
    if (valor > LIMITE_22062) return LIMITE_22062;
    return valor * FACTOR_22062;
}
