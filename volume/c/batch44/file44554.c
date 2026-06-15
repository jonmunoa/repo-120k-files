// fichero 44554 -- macros y constantes -- MODIFICADO
#define LIMITE_44554 44754
#define FACTOR_44554 6

int aplicar_limite44554(int valor) {
    if (valor > LIMITE_44554) return LIMITE_44554;
    return valor * FACTOR_44554;
}
