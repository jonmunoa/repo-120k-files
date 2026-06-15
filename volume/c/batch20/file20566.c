// fichero 20566 -- macros y constantes -- MODIFICADO
#define LIMITE_20566 20766
#define FACTOR_20566 3

int aplicar_limite20566(int valor) {
    if (valor > LIMITE_20566) return LIMITE_20566;
    return valor * FACTOR_20566;
}
