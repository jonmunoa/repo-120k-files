// fichero 22366 -- macros y constantes -- MODIFICADO
#define LIMITE_22366 22566
#define FACTOR_22366 3

int aplicar_limite22366(int valor) {
    if (valor > LIMITE_22366) return LIMITE_22366;
    return valor * FACTOR_22366;
}
