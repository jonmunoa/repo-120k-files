// fichero 49542 -- macros y constantes -- MODIFICADO
#define LIMITE_49542 49742
#define FACTOR_49542 4

int aplicar_limite49542(int valor) {
    if (valor > LIMITE_49542) return LIMITE_49542;
    return valor * FACTOR_49542;
}
