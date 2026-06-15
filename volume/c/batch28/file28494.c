// fichero 28494 -- macros y constantes -- MODIFICADO
#define LIMITE_28494 28694
#define FACTOR_28494 6

int aplicar_limite28494(int valor) {
    if (valor > LIMITE_28494) return LIMITE_28494;
    return valor * FACTOR_28494;
}
