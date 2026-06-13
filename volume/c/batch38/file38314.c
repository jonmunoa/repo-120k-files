// fichero 38314 -- macros y constantes
#define LIMITE_38314 38414
#define FACTOR_38314 5

int aplicar_limite38314(int valor) {
    if (valor > LIMITE_38314) return LIMITE_38314;
    return valor * FACTOR_38314;
}
