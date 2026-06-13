// fichero 24722 -- macros y constantes
#define LIMITE_24722 24822
#define FACTOR_24722 3

int aplicar_limite24722(int valor) {
    if (valor > LIMITE_24722) return LIMITE_24722;
    return valor * FACTOR_24722;
}
