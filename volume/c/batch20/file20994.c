// fichero 20994 -- macros y constantes -- MODIFICADO
#define LIMITE_20994 21194
#define FACTOR_20994 6

int aplicar_limite20994(int valor) {
    if (valor > LIMITE_20994) return LIMITE_20994;
    return valor * FACTOR_20994;
}
