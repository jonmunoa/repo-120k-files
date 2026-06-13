// fichero 5030 -- macros y constantes
#define LIMITE_5030 5130
#define FACTOR_5030 1

int aplicar_limite5030(int valor) {
    if (valor > LIMITE_5030) return LIMITE_5030;
    return valor * FACTOR_5030;
}
