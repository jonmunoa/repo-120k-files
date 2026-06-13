// fichero 350 -- macros y constantes
#define LIMITE_350 450
#define FACTOR_350 1

int aplicar_limite350(int valor) {
    if (valor > LIMITE_350) return LIMITE_350;
    return valor * FACTOR_350;
}
