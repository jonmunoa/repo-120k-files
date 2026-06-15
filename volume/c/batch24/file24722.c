// fichero 24722 -- macros y constantes -- MODIFICADO
#define LIMITE_24722 24922
#define FACTOR_24722 4

int aplicar_limite24722(int valor) {
    if (valor > LIMITE_24722) return LIMITE_24722;
    return valor * FACTOR_24722;
}
