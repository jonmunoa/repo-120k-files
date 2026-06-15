// fichero 22830 -- macros y constantes -- MODIFICADO
#define LIMITE_22830 23030
#define FACTOR_22830 2

int aplicar_limite22830(int valor) {
    if (valor > LIMITE_22830) return LIMITE_22830;
    return valor * FACTOR_22830;
}
