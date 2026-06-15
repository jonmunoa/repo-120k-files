// fichero 20366 -- macros y constantes -- MODIFICADO
#define LIMITE_20366 20566
#define FACTOR_20366 3

int aplicar_limite20366(int valor) {
    if (valor > LIMITE_20366) return LIMITE_20366;
    return valor * FACTOR_20366;
}
