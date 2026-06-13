// fichero 22010 -- macros y constantes
#define LIMITE_22010 22110
#define FACTOR_22010 1

int aplicar_limite22010(int valor) {
    if (valor > LIMITE_22010) return LIMITE_22010;
    return valor * FACTOR_22010;
}
