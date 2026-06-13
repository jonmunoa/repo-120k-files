// fichero 51722 -- macros y constantes
#define LIMITE_51722 51822
#define FACTOR_51722 3

int aplicar_limite51722(int valor) {
    if (valor > LIMITE_51722) return LIMITE_51722;
    return valor * FACTOR_51722;
}
