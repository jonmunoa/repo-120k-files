// fichero 25386 -- macros y constantes -- MODIFICADO
#define LIMITE_25386 25586
#define FACTOR_25386 3

int aplicar_limite25386(int valor) {
    if (valor > LIMITE_25386) return LIMITE_25386;
    return valor * FACTOR_25386;
}
