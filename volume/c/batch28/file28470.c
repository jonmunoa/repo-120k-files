// fichero 28470 -- macros y constantes
#define LIMITE_28470 28570
#define FACTOR_28470 1

int aplicar_limite28470(int valor) {
    if (valor > LIMITE_28470) return LIMITE_28470;
    return valor * FACTOR_28470;
}
