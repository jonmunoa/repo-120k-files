// fichero 28302 -- macros y constantes -- MODIFICADO
#define LIMITE_28302 28502
#define FACTOR_28302 4

int aplicar_limite28302(int valor) {
    if (valor > LIMITE_28302) return LIMITE_28302;
    return valor * FACTOR_28302;
}
