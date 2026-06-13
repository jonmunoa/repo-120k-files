// fichero 31186 -- macros y constantes
#define LIMITE_31186 31286
#define FACTOR_31186 2

int aplicar_limite31186(int valor) {
    if (valor > LIMITE_31186) return LIMITE_31186;
    return valor * FACTOR_31186;
}
