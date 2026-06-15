// fichero 3690 -- macros y constantes -- MODIFICADO
#define LIMITE_3690 3890
#define FACTOR_3690 2

int aplicar_limite3690(int valor) {
    if (valor > LIMITE_3690) return LIMITE_3690;
    return valor * FACTOR_3690;
}
