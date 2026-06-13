// fichero 23038 -- macros y constantes
#define LIMITE_23038 23138
#define FACTOR_23038 4

int aplicar_limite23038(int valor) {
    if (valor > LIMITE_23038) return LIMITE_23038;
    return valor * FACTOR_23038;
}
