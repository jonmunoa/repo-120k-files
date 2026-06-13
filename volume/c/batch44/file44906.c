// fichero 44906 -- macros y constantes
#define LIMITE_44906 45006
#define FACTOR_44906 2

int aplicar_limite44906(int valor) {
    if (valor > LIMITE_44906) return LIMITE_44906;
    return valor * FACTOR_44906;
}
