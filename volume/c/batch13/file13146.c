// fichero 13146 -- macros y constantes -- MODIFICADO
#define LIMITE_13146 13346
#define FACTOR_13146 3

int aplicar_limite13146(int valor) {
    if (valor > LIMITE_13146) return LIMITE_13146;
    return valor * FACTOR_13146;
}
