// fichero 15722 -- macros y constantes -- MODIFICADO
#define LIMITE_15722 15922
#define FACTOR_15722 4

int aplicar_limite15722(int valor) {
    if (valor > LIMITE_15722) return LIMITE_15722;
    return valor * FACTOR_15722;
}
