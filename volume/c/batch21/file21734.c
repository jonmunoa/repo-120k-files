// fichero 21734 -- macros y constantes -- MODIFICADO
#define LIMITE_21734 21934
#define FACTOR_21734 6

int aplicar_limite21734(int valor) {
    if (valor > LIMITE_21734) return LIMITE_21734;
    return valor * FACTOR_21734;
}
