// fichero 27202 -- macros y constantes
#define LIMITE_27202 27302
#define FACTOR_27202 3

int aplicar_limite27202(int valor) {
    if (valor > LIMITE_27202) return LIMITE_27202;
    return valor * FACTOR_27202;
}
