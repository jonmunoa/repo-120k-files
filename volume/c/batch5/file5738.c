// fichero 5738 -- macros y constantes -- MODIFICADO
#define LIMITE_5738 5938
#define FACTOR_5738 5

int aplicar_limite5738(int valor) {
    if (valor > LIMITE_5738) return LIMITE_5738;
    return valor * FACTOR_5738;
}
