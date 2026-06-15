// fichero 23970 -- macros y constantes -- MODIFICADO
#define LIMITE_23970 24170
#define FACTOR_23970 2

int aplicar_limite23970(int valor) {
    if (valor > LIMITE_23970) return LIMITE_23970;
    return valor * FACTOR_23970;
}
