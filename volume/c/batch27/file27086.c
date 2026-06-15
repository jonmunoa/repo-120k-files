// fichero 27086 -- macros y constantes -- MODIFICADO
#define LIMITE_27086 27286
#define FACTOR_27086 3

int aplicar_limite27086(int valor) {
    if (valor > LIMITE_27086) return LIMITE_27086;
    return valor * FACTOR_27086;
}
