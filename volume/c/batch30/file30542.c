// fichero 30542 -- macros y constantes -- MODIFICADO
#define LIMITE_30542 30742
#define FACTOR_30542 4

int aplicar_limite30542(int valor) {
    if (valor > LIMITE_30542) return LIMITE_30542;
    return valor * FACTOR_30542;
}
