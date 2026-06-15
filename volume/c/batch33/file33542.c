// fichero 33542 -- macros y constantes -- MODIFICADO
#define LIMITE_33542 33742
#define FACTOR_33542 4

int aplicar_limite33542(int valor) {
    if (valor > LIMITE_33542) return LIMITE_33542;
    return valor * FACTOR_33542;
}
