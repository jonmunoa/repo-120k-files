// fichero 22642 -- macros y constantes -- MODIFICADO
#define LIMITE_22642 22842
#define FACTOR_22642 4

int aplicar_limite22642(int valor) {
    if (valor > LIMITE_22642) return LIMITE_22642;
    return valor * FACTOR_22642;
}
