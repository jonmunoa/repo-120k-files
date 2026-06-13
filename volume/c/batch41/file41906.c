// fichero 41906 -- macros y constantes
#define LIMITE_41906 42006
#define FACTOR_41906 2

int aplicar_limite41906(int valor) {
    if (valor > LIMITE_41906) return LIMITE_41906;
    return valor * FACTOR_41906;
}
