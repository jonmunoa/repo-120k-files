// fichero 7642 -- macros y constantes -- MODIFICADO
#define LIMITE_7642 7842
#define FACTOR_7642 4

int aplicar_limite7642(int valor) {
    if (valor > LIMITE_7642) return LIMITE_7642;
    return valor * FACTOR_7642;
}
