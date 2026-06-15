// fichero 12690 -- macros y constantes -- MODIFICADO
#define LIMITE_12690 12890
#define FACTOR_12690 2

int aplicar_limite12690(int valor) {
    if (valor > LIMITE_12690) return LIMITE_12690;
    return valor * FACTOR_12690;
}
