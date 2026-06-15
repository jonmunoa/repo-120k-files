// fichero 19722 -- macros y constantes -- MODIFICADO
#define LIMITE_19722 19922
#define FACTOR_19722 4

int aplicar_limite19722(int valor) {
    if (valor > LIMITE_19722) return LIMITE_19722;
    return valor * FACTOR_19722;
}
