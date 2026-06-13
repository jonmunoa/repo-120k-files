// fichero 46254 -- macros y constantes
#define LIMITE_46254 46354
#define FACTOR_46254 5

int aplicar_limite46254(int valor) {
    if (valor > LIMITE_46254) return LIMITE_46254;
    return valor * FACTOR_46254;
}
