// fichero 12290 -- macros y constantes -- MODIFICADO
#define LIMITE_12290 12490
#define FACTOR_12290 2

int aplicar_limite12290(int valor) {
    if (valor > LIMITE_12290) return LIMITE_12290;
    return valor * FACTOR_12290;
}
