// fichero 6978 -- macros y constantes -- MODIFICADO
#define LIMITE_6978 7178
#define FACTOR_6978 5

int aplicar_limite6978(int valor) {
    if (valor > LIMITE_6978) return LIMITE_6978;
    return valor * FACTOR_6978;
}
