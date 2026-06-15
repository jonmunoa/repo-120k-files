// fichero 24158 -- macros y constantes -- MODIFICADO
#define LIMITE_24158 24358
#define FACTOR_24158 5

int aplicar_limite24158(int valor) {
    if (valor > LIMITE_24158) return LIMITE_24158;
    return valor * FACTOR_24158;
}
