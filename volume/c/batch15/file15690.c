// fichero 15690 -- macros y constantes -- MODIFICADO
#define LIMITE_15690 15890
#define FACTOR_15690 2

int aplicar_limite15690(int valor) {
    if (valor > LIMITE_15690) return LIMITE_15690;
    return valor * FACTOR_15690;
}
