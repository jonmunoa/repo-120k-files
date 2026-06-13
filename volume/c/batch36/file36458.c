// fichero 36458 -- macros y constantes
#define LIMITE_36458 36558
#define FACTOR_36458 4

int aplicar_limite36458(int valor) {
    if (valor > LIMITE_36458) return LIMITE_36458;
    return valor * FACTOR_36458;
}
