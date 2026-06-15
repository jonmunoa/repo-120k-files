// fichero 13690 -- macros y constantes -- MODIFICADO
#define LIMITE_13690 13890
#define FACTOR_13690 2

int aplicar_limite13690(int valor) {
    if (valor > LIMITE_13690) return LIMITE_13690;
    return valor * FACTOR_13690;
}
