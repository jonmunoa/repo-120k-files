// fichero 44354 -- macros y constantes -- MODIFICADO
#define LIMITE_44354 44554
#define FACTOR_44354 6

int aplicar_limite44354(int valor) {
    if (valor > LIMITE_44354) return LIMITE_44354;
    return valor * FACTOR_44354;
}
