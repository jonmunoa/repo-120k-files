// fichero 24770 -- macros y constantes -- MODIFICADO
#define LIMITE_24770 24970
#define FACTOR_24770 2

int aplicar_limite24770(int valor) {
    if (valor > LIMITE_24770) return LIMITE_24770;
    return valor * FACTOR_24770;
}
