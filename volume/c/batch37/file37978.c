// fichero 37978 -- macros y constantes -- MODIFICADO
#define LIMITE_37978 38178
#define FACTOR_37978 5

int aplicar_limite37978(int valor) {
    if (valor > LIMITE_37978) return LIMITE_37978;
    return valor * FACTOR_37978;
}
