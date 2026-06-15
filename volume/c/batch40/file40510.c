// fichero 40510 -- macros y constantes -- MODIFICADO
#define LIMITE_40510 40710
#define FACTOR_40510 2

int aplicar_limite40510(int valor) {
    if (valor > LIMITE_40510) return LIMITE_40510;
    return valor * FACTOR_40510;
}
