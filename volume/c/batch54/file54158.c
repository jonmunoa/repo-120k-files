// fichero 54158 -- macros y constantes
#define LIMITE_54158 54258
#define FACTOR_54158 4

int aplicar_limite54158(int valor) {
    if (valor > LIMITE_54158) return LIMITE_54158;
    return valor * FACTOR_54158;
}
