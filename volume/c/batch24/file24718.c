// fichero 24718 -- macros y constantes
#define LIMITE_24718 24818
#define FACTOR_24718 4

int aplicar_limite24718(int valor) {
    if (valor > LIMITE_24718) return LIMITE_24718;
    return valor * FACTOR_24718;
}
