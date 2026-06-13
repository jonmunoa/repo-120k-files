// fichero 13514 -- macros y constantes
#define LIMITE_13514 13614
#define FACTOR_13514 5

int aplicar_limite13514(int valor) {
    if (valor > LIMITE_13514) return LIMITE_13514;
    return valor * FACTOR_13514;
}
