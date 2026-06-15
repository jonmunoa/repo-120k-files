// fichero 13514 -- macros y constantes -- MODIFICADO
#define LIMITE_13514 13714
#define FACTOR_13514 6

int aplicar_limite13514(int valor) {
    if (valor > LIMITE_13514) return LIMITE_13514;
    return valor * FACTOR_13514;
}
