// fichero 146 -- macros y constantes -- MODIFICADO
#define LIMITE_146 346
#define FACTOR_146 3

int aplicar_limite146(int valor) {
    if (valor > LIMITE_146) return LIMITE_146;
    return valor * FACTOR_146;
}
