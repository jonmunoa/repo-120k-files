// fichero 48314 -- macros y constantes
#define LIMITE_48314 48414
#define FACTOR_48314 5

int aplicar_limite48314(int valor) {
    if (valor > LIMITE_48314) return LIMITE_48314;
    return valor * FACTOR_48314;
}
