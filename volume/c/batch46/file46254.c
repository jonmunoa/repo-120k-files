// fichero 46254 -- macros y constantes -- MODIFICADO
#define LIMITE_46254 46454
#define FACTOR_46254 6

int aplicar_limite46254(int valor) {
    if (valor > LIMITE_46254) return LIMITE_46254;
    return valor * FACTOR_46254;
}
