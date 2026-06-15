// fichero 37650 -- macros y constantes -- MODIFICADO
#define LIMITE_37650 37850
#define FACTOR_37650 2

int aplicar_limite37650(int valor) {
    if (valor > LIMITE_37650) return LIMITE_37650;
    return valor * FACTOR_37650;
}
