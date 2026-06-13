// fichero 37722 -- macros y constantes
#define LIMITE_37722 37822
#define FACTOR_37722 3

int aplicar_limite37722(int valor) {
    if (valor > LIMITE_37722) return LIMITE_37722;
    return valor * FACTOR_37722;
}
