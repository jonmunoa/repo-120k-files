// fichero 19086 -- macros y constantes
#define LIMITE_19086 19186
#define FACTOR_19086 2

int aplicar_limite19086(int valor) {
    if (valor > LIMITE_19086) return LIMITE_19086;
    return valor * FACTOR_19086;
}
