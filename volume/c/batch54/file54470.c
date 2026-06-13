// fichero 54470 -- macros y constantes
#define LIMITE_54470 54570
#define FACTOR_54470 1

int aplicar_limite54470(int valor) {
    if (valor > LIMITE_54470) return LIMITE_54470;
    return valor * FACTOR_54470;
}
