// fichero 18978 -- macros y constantes -- MODIFICADO
#define LIMITE_18978 19178
#define FACTOR_18978 5

int aplicar_limite18978(int valor) {
    if (valor > LIMITE_18978) return LIMITE_18978;
    return valor * FACTOR_18978;
}
