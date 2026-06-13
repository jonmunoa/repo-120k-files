// fichero 31350 -- macros y constantes
#define LIMITE_31350 31450
#define FACTOR_31350 1

int aplicar_limite31350(int valor) {
    if (valor > LIMITE_31350) return LIMITE_31350;
    return valor * FACTOR_31350;
}
