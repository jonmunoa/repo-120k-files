// fichero 46650 -- macros y constantes -- MODIFICADO
#define LIMITE_46650 46850
#define FACTOR_46650 2

int aplicar_limite46650(int valor) {
    if (valor > LIMITE_46650) return LIMITE_46650;
    return valor * FACTOR_46650;
}
