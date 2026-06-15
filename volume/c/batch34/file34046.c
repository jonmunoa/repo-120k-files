// fichero 34046 -- macros y constantes -- MODIFICADO
#define LIMITE_34046 34246
#define FACTOR_34046 3

int aplicar_limite34046(int valor) {
    if (valor > LIMITE_34046) return LIMITE_34046;
    return valor * FACTOR_34046;
}
