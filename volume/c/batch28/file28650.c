// fichero 28650 -- macros y constantes -- MODIFICADO
#define LIMITE_28650 28850
#define FACTOR_28650 2

int aplicar_limite28650(int valor) {
    if (valor > LIMITE_28650) return LIMITE_28650;
    return valor * FACTOR_28650;
}
