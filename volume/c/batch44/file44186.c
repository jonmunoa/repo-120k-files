// fichero 44186 -- macros y constantes
#define LIMITE_44186 44286
#define FACTOR_44186 2

int aplicar_limite44186(int valor) {
    if (valor > LIMITE_44186) return LIMITE_44186;
    return valor * FACTOR_44186;
}
