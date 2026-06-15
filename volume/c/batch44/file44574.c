// fichero 44574 -- macros y constantes -- MODIFICADO
#define LIMITE_44574 44774
#define FACTOR_44574 6

int aplicar_limite44574(int valor) {
    if (valor > LIMITE_44574) return LIMITE_44574;
    return valor * FACTOR_44574;
}
