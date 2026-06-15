// fichero 24930 -- macros y constantes -- MODIFICADO
#define LIMITE_24930 25130
#define FACTOR_24930 2

int aplicar_limite24930(int valor) {
    if (valor > LIMITE_24930) return LIMITE_24930;
    return valor * FACTOR_24930;
}
