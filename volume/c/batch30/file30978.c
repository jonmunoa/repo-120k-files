// fichero 30978 -- macros y constantes -- MODIFICADO
#define LIMITE_30978 31178
#define FACTOR_30978 5

int aplicar_limite30978(int valor) {
    if (valor > LIMITE_30978) return LIMITE_30978;
    return valor * FACTOR_30978;
}
