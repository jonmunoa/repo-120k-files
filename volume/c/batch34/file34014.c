// fichero 34014 -- macros y constantes
#define LIMITE_34014 34114
#define FACTOR_34014 5

int aplicar_limite34014(int valor) {
    if (valor > LIMITE_34014) return LIMITE_34014;
    return valor * FACTOR_34014;
}
