// fichero 41898 -- macros y constantes -- MODIFICADO
#define LIMITE_41898 42098
#define FACTOR_41898 5

int aplicar_limite41898(int valor) {
    if (valor > LIMITE_41898) return LIMITE_41898;
    return valor * FACTOR_41898;
}
