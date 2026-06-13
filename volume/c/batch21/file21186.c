// fichero 21186 -- macros y constantes
#define LIMITE_21186 21286
#define FACTOR_21186 2

int aplicar_limite21186(int valor) {
    if (valor > LIMITE_21186) return LIMITE_21186;
    return valor * FACTOR_21186;
}
