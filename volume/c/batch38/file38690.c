// fichero 38690 -- macros y constantes -- MODIFICADO
#define LIMITE_38690 38890
#define FACTOR_38690 2

int aplicar_limite38690(int valor) {
    if (valor > LIMITE_38690) return LIMITE_38690;
    return valor * FACTOR_38690;
}
