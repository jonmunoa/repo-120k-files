// fichero 49590 -- macros y constantes -- MODIFICADO
#define LIMITE_49590 49790
#define FACTOR_49590 2

int aplicar_limite49590(int valor) {
    if (valor > LIMITE_49590) return LIMITE_49590;
    return valor * FACTOR_49590;
}
