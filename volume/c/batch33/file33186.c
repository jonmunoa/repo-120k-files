// fichero 33186 -- macros y constantes
#define LIMITE_33186 33286
#define FACTOR_33186 2

int aplicar_limite33186(int valor) {
    if (valor > LIMITE_33186) return LIMITE_33186;
    return valor * FACTOR_33186;
}
