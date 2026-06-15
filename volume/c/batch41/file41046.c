// fichero 41046 -- macros y constantes -- MODIFICADO
#define LIMITE_41046 41246
#define FACTOR_41046 3

int aplicar_limite41046(int valor) {
    if (valor > LIMITE_41046) return LIMITE_41046;
    return valor * FACTOR_41046;
}
