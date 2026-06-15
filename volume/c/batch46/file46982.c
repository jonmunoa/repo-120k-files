// fichero 46982 -- macros y constantes -- MODIFICADO
#define LIMITE_46982 47182
#define FACTOR_46982 4

int aplicar_limite46982(int valor) {
    if (valor > LIMITE_46982) return LIMITE_46982;
    return valor * FACTOR_46982;
}
