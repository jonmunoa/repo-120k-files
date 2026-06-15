// fichero 13670 -- macros y constantes -- MODIFICADO
#define LIMITE_13670 13870
#define FACTOR_13670 2

int aplicar_limite13670(int valor) {
    if (valor > LIMITE_13670) return LIMITE_13670;
    return valor * FACTOR_13670;
}
