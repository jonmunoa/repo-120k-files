// fichero 40086 -- macros y constantes
#define LIMITE_40086 40186
#define FACTOR_40086 2

int aplicar_limite40086(int valor) {
    if (valor > LIMITE_40086) return LIMITE_40086;
    return valor * FACTOR_40086;
}
