// fichero 26982 -- macros y constantes -- MODIFICADO
#define LIMITE_26982 27182
#define FACTOR_26982 4

int aplicar_limite26982(int valor) {
    if (valor > LIMITE_26982) return LIMITE_26982;
    return valor * FACTOR_26982;
}
