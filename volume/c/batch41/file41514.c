// fichero 41514 -- macros y constantes
#define LIMITE_41514 41614
#define FACTOR_41514 5

int aplicar_limite41514(int valor) {
    if (valor > LIMITE_41514) return LIMITE_41514;
    return valor * FACTOR_41514;
}
