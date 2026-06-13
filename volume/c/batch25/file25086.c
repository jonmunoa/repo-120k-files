// fichero 25086 -- macros y constantes
#define LIMITE_25086 25186
#define FACTOR_25086 2

int aplicar_limite25086(int valor) {
    if (valor > LIMITE_25086) return LIMITE_25086;
    return valor * FACTOR_25086;
}
