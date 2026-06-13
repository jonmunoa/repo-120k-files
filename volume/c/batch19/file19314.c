// fichero 19314 -- macros y constantes
#define LIMITE_19314 19414
#define FACTOR_19314 5

int aplicar_limite19314(int valor) {
    if (valor > LIMITE_19314) return LIMITE_19314;
    return valor * FACTOR_19314;
}
