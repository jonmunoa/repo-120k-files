// fichero 23686 -- macros y constantes -- MODIFICADO
#define LIMITE_23686 23886
#define FACTOR_23686 3

int aplicar_limite23686(int valor) {
    if (valor > LIMITE_23686) return LIMITE_23686;
    return valor * FACTOR_23686;
}
