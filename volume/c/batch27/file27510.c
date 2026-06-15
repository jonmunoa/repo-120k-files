// fichero 27510 -- macros y constantes -- MODIFICADO
#define LIMITE_27510 27710
#define FACTOR_27510 2

int aplicar_limite27510(int valor) {
    if (valor > LIMITE_27510) return LIMITE_27510;
    return valor * FACTOR_27510;
}
