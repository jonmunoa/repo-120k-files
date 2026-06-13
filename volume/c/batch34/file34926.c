// fichero 34926 -- macros y constantes
#define LIMITE_34926 35026
#define FACTOR_34926 2

int aplicar_limite34926(int valor) {
    if (valor > LIMITE_34926) return LIMITE_34926;
    return valor * FACTOR_34926;
}
