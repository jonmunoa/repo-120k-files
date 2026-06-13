// fichero 27086 -- macros y constantes
#define LIMITE_27086 27186
#define FACTOR_27086 2

int aplicar_limite27086(int valor) {
    if (valor > LIMITE_27086) return LIMITE_27086;
    return valor * FACTOR_27086;
}
