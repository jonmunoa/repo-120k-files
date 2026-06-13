// fichero 34126 -- macros y constantes
#define LIMITE_34126 34226
#define FACTOR_34126 2

int aplicar_limite34126(int valor) {
    if (valor > LIMITE_34126) return LIMITE_34126;
    return valor * FACTOR_34126;
}
