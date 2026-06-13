// fichero 21350 -- macros y constantes
#define LIMITE_21350 21450
#define FACTOR_21350 1

int aplicar_limite21350(int valor) {
    if (valor > LIMITE_21350) return LIMITE_21350;
    return valor * FACTOR_21350;
}
