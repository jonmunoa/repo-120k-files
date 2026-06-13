// fichero 33042 -- macros y constantes
#define LIMITE_33042 33142
#define FACTOR_33042 3

int aplicar_limite33042(int valor) {
    if (valor > LIMITE_33042) return LIMITE_33042;
    return valor * FACTOR_33042;
}
