// fichero 40386 -- macros y constantes
#define LIMITE_40386 40486
#define FACTOR_40386 2

int aplicar_limite40386(int valor) {
    if (valor > LIMITE_40386) return LIMITE_40386;
    return valor * FACTOR_40386;
}
