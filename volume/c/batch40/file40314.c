// fichero 40314 -- macros y constantes
#define LIMITE_40314 40414
#define FACTOR_40314 5

int aplicar_limite40314(int valor) {
    if (valor > LIMITE_40314) return LIMITE_40314;
    return valor * FACTOR_40314;
}
