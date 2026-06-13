// fichero 44926 -- macros y constantes
#define LIMITE_44926 45026
#define FACTOR_44926 2

int aplicar_limite44926(int valor) {
    if (valor > LIMITE_44926) return LIMITE_44926;
    return valor * FACTOR_44926;
}
