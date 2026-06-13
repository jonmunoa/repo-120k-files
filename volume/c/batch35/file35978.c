// fichero 35978 -- macros y constantes
#define LIMITE_35978 36078
#define FACTOR_35978 4

int aplicar_limite35978(int valor) {
    if (valor > LIMITE_35978) return LIMITE_35978;
    return valor * FACTOR_35978;
}
