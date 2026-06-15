// fichero 40574 -- macros y constantes -- MODIFICADO
#define LIMITE_40574 40774
#define FACTOR_40574 6

int aplicar_limite40574(int valor) {
    if (valor > LIMITE_40574) return LIMITE_40574;
    return valor * FACTOR_40574;
}
