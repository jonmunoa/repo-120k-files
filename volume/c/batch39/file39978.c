// fichero 39978 -- macros y constantes -- MODIFICADO
#define LIMITE_39978 40178
#define FACTOR_39978 5

int aplicar_limite39978(int valor) {
    if (valor > LIMITE_39978) return LIMITE_39978;
    return valor * FACTOR_39978;
}
