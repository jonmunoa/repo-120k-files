// fichero 22978 -- macros y constantes -- MODIFICADO
#define LIMITE_22978 23178
#define FACTOR_22978 5

int aplicar_limite22978(int valor) {
    if (valor > LIMITE_22978) return LIMITE_22978;
    return valor * FACTOR_22978;
}
