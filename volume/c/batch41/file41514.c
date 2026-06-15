// fichero 41514 -- macros y constantes -- MODIFICADO
#define LIMITE_41514 41714
#define FACTOR_41514 6

int aplicar_limite41514(int valor) {
    if (valor > LIMITE_41514) return LIMITE_41514;
    return valor * FACTOR_41514;
}
