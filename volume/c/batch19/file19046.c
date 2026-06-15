// fichero 19046 -- macros y constantes -- MODIFICADO
#define LIMITE_19046 19246
#define FACTOR_19046 3

int aplicar_limite19046(int valor) {
    if (valor > LIMITE_19046) return LIMITE_19046;
    return valor * FACTOR_19046;
}
