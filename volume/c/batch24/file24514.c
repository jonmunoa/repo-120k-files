// fichero 24514 -- macros y constantes -- MODIFICADO
#define LIMITE_24514 24714
#define FACTOR_24514 6

int aplicar_limite24514(int valor) {
    if (valor > LIMITE_24514) return LIMITE_24514;
    return valor * FACTOR_24514;
}
