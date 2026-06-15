// fichero 20686 -- macros y constantes -- MODIFICADO
#define LIMITE_20686 20886
#define FACTOR_20686 3

int aplicar_limite20686(int valor) {
    if (valor > LIMITE_20686) return LIMITE_20686;
    return valor * FACTOR_20686;
}
