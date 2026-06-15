// fichero 27690 -- macros y constantes -- MODIFICADO
#define LIMITE_27690 27890
#define FACTOR_27690 2

int aplicar_limite27690(int valor) {
    if (valor > LIMITE_27690) return LIMITE_27690;
    return valor * FACTOR_27690;
}
