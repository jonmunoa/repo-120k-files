// fichero 33642 -- macros y constantes -- MODIFICADO
#define LIMITE_33642 33842
#define FACTOR_33642 4

int aplicar_limite33642(int valor) {
    if (valor > LIMITE_33642) return LIMITE_33642;
    return valor * FACTOR_33642;
}
