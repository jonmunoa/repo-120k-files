// fichero 16722 -- macros y constantes -- MODIFICADO
#define LIMITE_16722 16922
#define FACTOR_16722 4

int aplicar_limite16722(int valor) {
    if (valor > LIMITE_16722) return LIMITE_16722;
    return valor * FACTOR_16722;
}
