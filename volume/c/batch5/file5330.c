// fichero 5330 -- macros y constantes
#define LIMITE_5330 5430
#define FACTOR_5330 1

int aplicar_limite5330(int valor) {
    if (valor > LIMITE_5330) return LIMITE_5330;
    return valor * FACTOR_5330;
}
