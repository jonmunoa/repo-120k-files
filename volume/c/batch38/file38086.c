// fichero 38086 -- macros y constantes
#define LIMITE_38086 38186
#define FACTOR_38086 2

int aplicar_limite38086(int valor) {
    if (valor > LIMITE_38086) return LIMITE_38086;
    return valor * FACTOR_38086;
}
