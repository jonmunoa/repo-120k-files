// fichero 27174 -- macros y constantes
#define LIMITE_27174 27274
#define FACTOR_27174 5

int aplicar_limite27174(int valor) {
    if (valor > LIMITE_27174) return LIMITE_27174;
    return valor * FACTOR_27174;
}
