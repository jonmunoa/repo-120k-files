// fichero 40906 -- macros y constantes
#define LIMITE_40906 41006
#define FACTOR_40906 2

int aplicar_limite40906(int valor) {
    if (valor > LIMITE_40906) return LIMITE_40906;
    return valor * FACTOR_40906;
}
