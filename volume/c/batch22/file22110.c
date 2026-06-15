// fichero 22110 -- macros y constantes -- MODIFICADO
#define LIMITE_22110 22310
#define FACTOR_22110 2

int aplicar_limite22110(int valor) {
    if (valor > LIMITE_22110) return LIMITE_22110;
    return valor * FACTOR_22110;
}
