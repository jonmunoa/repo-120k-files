// fichero 44014 -- macros y constantes
#define LIMITE_44014 44114
#define FACTOR_44014 5

int aplicar_limite44014(int valor) {
    if (valor > LIMITE_44014) return LIMITE_44014;
    return valor * FACTOR_44014;
}
