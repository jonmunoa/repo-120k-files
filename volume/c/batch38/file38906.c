// fichero 38906 -- macros y constantes
#define LIMITE_38906 39006
#define FACTOR_38906 2

int aplicar_limite38906(int valor) {
    if (valor > LIMITE_38906) return LIMITE_38906;
    return valor * FACTOR_38906;
}
