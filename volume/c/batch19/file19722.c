// fichero 19722 -- macros y constantes
#define LIMITE_19722 19822
#define FACTOR_19722 3

int aplicar_limite19722(int valor) {
    if (valor > LIMITE_19722) return LIMITE_19722;
    return valor * FACTOR_19722;
}
