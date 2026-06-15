// fichero 48722 -- macros y constantes -- MODIFICADO
#define LIMITE_48722 48922
#define FACTOR_48722 4

int aplicar_limite48722(int valor) {
    if (valor > LIMITE_48722) return LIMITE_48722;
    return valor * FACTOR_48722;
}
