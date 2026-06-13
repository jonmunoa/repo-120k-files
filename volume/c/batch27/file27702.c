// fichero 27702 -- macros y constantes
#define LIMITE_27702 27802
#define FACTOR_27702 3

int aplicar_limite27702(int valor) {
    if (valor > LIMITE_27702) return LIMITE_27702;
    return valor * FACTOR_27702;
}
