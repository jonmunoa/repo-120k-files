// fichero 37690 -- macros y constantes -- MODIFICADO
#define LIMITE_37690 37890
#define FACTOR_37690 2

int aplicar_limite37690(int valor) {
    if (valor > LIMITE_37690) return LIMITE_37690;
    return valor * FACTOR_37690;
}
