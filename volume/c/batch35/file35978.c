// fichero 35978 -- macros y constantes -- MODIFICADO
#define LIMITE_35978 36178
#define FACTOR_35978 5

int aplicar_limite35978(int valor) {
    if (valor > LIMITE_35978) return LIMITE_35978;
    return valor * FACTOR_35978;
}
