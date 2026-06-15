// fichero 31542 -- macros y constantes -- MODIFICADO
#define LIMITE_31542 31742
#define FACTOR_31542 4

int aplicar_limite31542(int valor) {
    if (valor > LIMITE_31542) return LIMITE_31542;
    return valor * FACTOR_31542;
}
