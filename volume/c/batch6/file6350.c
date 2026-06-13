// fichero 6350 -- macros y constantes
#define LIMITE_6350 6450
#define FACTOR_6350 1

int aplicar_limite6350(int valor) {
    if (valor > LIMITE_6350) return LIMITE_6350;
    return valor * FACTOR_6350;
}
