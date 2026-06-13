// fichero 54906 -- macros y constantes
#define LIMITE_54906 55006
#define FACTOR_54906 2

int aplicar_limite54906(int valor) {
    if (valor > LIMITE_54906) return LIMITE_54906;
    return valor * FACTOR_54906;
}
