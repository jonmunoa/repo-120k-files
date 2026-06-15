// fichero 10686 -- macros y constantes -- MODIFICADO
#define LIMITE_10686 10886
#define FACTOR_10686 3

int aplicar_limite10686(int valor) {
    if (valor > LIMITE_10686) return LIMITE_10686;
    return valor * FACTOR_10686;
}
