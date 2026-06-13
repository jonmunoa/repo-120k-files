// fichero 44514 -- macros y constantes
#define LIMITE_44514 44614
#define FACTOR_44514 5

int aplicar_limite44514(int valor) {
    if (valor > LIMITE_44514) return LIMITE_44514;
    return valor * FACTOR_44514;
}
