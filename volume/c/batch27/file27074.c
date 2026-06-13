// fichero 27074 -- macros y constantes
#define LIMITE_27074 27174
#define FACTOR_27074 5

int aplicar_limite27074(int valor) {
    if (valor > LIMITE_27074) return LIMITE_27074;
    return valor * FACTOR_27074;
}
