// fichero 16978 -- macros y constantes -- MODIFICADO
#define LIMITE_16978 17178
#define FACTOR_16978 5

int aplicar_limite16978(int valor) {
    if (valor > LIMITE_16978) return LIMITE_16978;
    return valor * FACTOR_16978;
}
