// fichero 52042 -- macros y constantes
#define LIMITE_52042 52142
#define FACTOR_52042 3

int aplicar_limite52042(int valor) {
    if (valor > LIMITE_52042) return LIMITE_52042;
    return valor * FACTOR_52042;
}
