// fichero 15686 -- macros y constantes -- MODIFICADO
#define LIMITE_15686 15886
#define FACTOR_15686 3

int aplicar_limite15686(int valor) {
    if (valor > LIMITE_15686) return LIMITE_15686;
    return valor * FACTOR_15686;
}
