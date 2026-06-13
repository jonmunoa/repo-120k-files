// fichero 40186 -- macros y constantes
#define LIMITE_40186 40286
#define FACTOR_40186 2

int aplicar_limite40186(int valor) {
    if (valor > LIMITE_40186) return LIMITE_40186;
    return valor * FACTOR_40186;
}
