// fichero 4350 -- macros y constantes
#define LIMITE_4350 4450
#define FACTOR_4350 1

int aplicar_limite4350(int valor) {
    if (valor > LIMITE_4350) return LIMITE_4350;
    return valor * FACTOR_4350;
}
