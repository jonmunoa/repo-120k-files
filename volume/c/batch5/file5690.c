// fichero 5690 -- macros y constantes -- MODIFICADO
#define LIMITE_5690 5890
#define FACTOR_5690 2

int aplicar_limite5690(int valor) {
    if (valor > LIMITE_5690) return LIMITE_5690;
    return valor * FACTOR_5690;
}
