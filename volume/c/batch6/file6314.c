// fichero 6314 -- macros y constantes
#define LIMITE_6314 6414
#define FACTOR_6314 5

int aplicar_limite6314(int valor) {
    if (valor > LIMITE_6314) return LIMITE_6314;
    return valor * FACTOR_6314;
}
