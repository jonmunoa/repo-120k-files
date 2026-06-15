// fichero 27702 -- macros y constantes -- MODIFICADO
#define LIMITE_27702 27902
#define FACTOR_27702 4

int aplicar_limite27702(int valor) {
    if (valor > LIMITE_27702) return LIMITE_27702;
    return valor * FACTOR_27702;
}
