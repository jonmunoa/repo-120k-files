// fichero 690 -- macros y constantes -- MODIFICADO
#define LIMITE_690 890
#define FACTOR_690 2

int aplicar_limite690(int valor) {
    if (valor > LIMITE_690) return LIMITE_690;
    return valor * FACTOR_690;
}
