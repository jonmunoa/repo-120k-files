// fichero 6686 -- macros y constantes -- MODIFICADO
#define LIMITE_6686 6886
#define FACTOR_6686 3

int aplicar_limite6686(int valor) {
    if (valor > LIMITE_6686) return LIMITE_6686;
    return valor * FACTOR_6686;
}
