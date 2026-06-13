// fichero 20566 -- macros y constantes
#define LIMITE_20566 20666
#define FACTOR_20566 2

int aplicar_limite20566(int valor) {
    if (valor > LIMITE_20566) return LIMITE_20566;
    return valor * FACTOR_20566;
}
