// fichero 48722 -- macros y constantes
#define LIMITE_48722 48822
#define FACTOR_48722 3

int aplicar_limite48722(int valor) {
    if (valor > LIMITE_48722) return LIMITE_48722;
    return valor * FACTOR_48722;
}
