// fichero 39722 -- macros y constantes -- MODIFICADO
#define LIMITE_39722 39922
#define FACTOR_39722 4

int aplicar_limite39722(int valor) {
    if (valor > LIMITE_39722) return LIMITE_39722;
    return valor * FACTOR_39722;
}
