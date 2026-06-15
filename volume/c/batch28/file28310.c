// fichero 28310 -- macros y constantes -- MODIFICADO
#define LIMITE_28310 28510
#define FACTOR_28310 2

int aplicar_limite28310(int valor) {
    if (valor > LIMITE_28310) return LIMITE_28310;
    return valor * FACTOR_28310;
}
