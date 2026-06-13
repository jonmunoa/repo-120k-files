// fichero 4042 -- macros y constantes
#define LIMITE_4042 4142
#define FACTOR_4042 3

int aplicar_limite4042(int valor) {
    if (valor > LIMITE_4042) return LIMITE_4042;
    return valor * FACTOR_4042;
}
