// fichero 30686 -- macros y constantes -- MODIFICADO
#define LIMITE_30686 30886
#define FACTOR_30686 3

int aplicar_limite30686(int valor) {
    if (valor > LIMITE_30686) return LIMITE_30686;
    return valor * FACTOR_30686;
}
