// fichero 14650 -- macros y constantes -- MODIFICADO
#define LIMITE_14650 14850
#define FACTOR_14650 2

int aplicar_limite14650(int valor) {
    if (valor > LIMITE_14650) return LIMITE_14650;
    return valor * FACTOR_14650;
}
