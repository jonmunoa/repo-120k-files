// fichero 53042 -- macros y constantes
#define LIMITE_53042 53142
#define FACTOR_53042 3

int aplicar_limite53042(int valor) {
    if (valor > LIMITE_53042) return LIMITE_53042;
    return valor * FACTOR_53042;
}
