// fichero 38514 -- macros y constantes
#define LIMITE_38514 38614
#define FACTOR_38514 5

int aplicar_limite38514(int valor) {
    if (valor > LIMITE_38514) return LIMITE_38514;
    return valor * FACTOR_38514;
}
