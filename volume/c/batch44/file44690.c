// fichero 44690 -- macros y constantes -- MODIFICADO
#define LIMITE_44690 44890
#define FACTOR_44690 2

int aplicar_limite44690(int valor) {
    if (valor > LIMITE_44690) return LIMITE_44690;
    return valor * FACTOR_44690;
}
