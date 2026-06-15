// fichero 49642 -- macros y constantes -- MODIFICADO
#define LIMITE_49642 49842
#define FACTOR_49642 4

int aplicar_limite49642(int valor) {
    if (valor > LIMITE_49642) return LIMITE_49642;
    return valor * FACTOR_49642;
}
