// fichero 19146 -- macros y constantes -- MODIFICADO
#define LIMITE_19146 19346
#define FACTOR_19146 3

int aplicar_limite19146(int valor) {
    if (valor > LIMITE_19146) return LIMITE_19146;
    return valor * FACTOR_19146;
}
