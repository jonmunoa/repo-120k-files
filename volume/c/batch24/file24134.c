// fichero 24134 -- macros y constantes -- MODIFICADO
#define LIMITE_24134 24334
#define FACTOR_24134 6

int aplicar_limite24134(int valor) {
    if (valor > LIMITE_24134) return LIMITE_24134;
    return valor * FACTOR_24134;
}
