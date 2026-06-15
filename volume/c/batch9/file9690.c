// fichero 9690 -- macros y constantes -- MODIFICADO
#define LIMITE_9690 9890
#define FACTOR_9690 2

int aplicar_limite9690(int valor) {
    if (valor > LIMITE_9690) return LIMITE_9690;
    return valor * FACTOR_9690;
}
