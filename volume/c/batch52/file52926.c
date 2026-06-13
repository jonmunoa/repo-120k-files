// fichero 52926 -- macros y constantes
#define LIMITE_52926 53026
#define FACTOR_52926 2

int aplicar_limite52926(int valor) {
    if (valor > LIMITE_52926) return LIMITE_52926;
    return valor * FACTOR_52926;
}
