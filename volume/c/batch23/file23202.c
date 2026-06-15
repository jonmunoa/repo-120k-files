// fichero 23202 -- macros y constantes -- MODIFICADO
#define LIMITE_23202 23402
#define FACTOR_23202 4

int aplicar_limite23202(int valor) {
    if (valor > LIMITE_23202) return LIMITE_23202;
    return valor * FACTOR_23202;
}
