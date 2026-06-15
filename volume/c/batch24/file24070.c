// fichero 24070 -- macros y constantes -- MODIFICADO
#define LIMITE_24070 24270
#define FACTOR_24070 2

int aplicar_limite24070(int valor) {
    if (valor > LIMITE_24070) return LIMITE_24070;
    return valor * FACTOR_24070;
}
