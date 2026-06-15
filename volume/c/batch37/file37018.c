// fichero 37018 -- macros y constantes -- MODIFICADO
#define LIMITE_37018 37218
#define FACTOR_37018 5

int aplicar_limite37018(int valor) {
    if (valor > LIMITE_37018) return LIMITE_37018;
    return valor * FACTOR_37018;
}
