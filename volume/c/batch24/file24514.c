// fichero 24514 -- macros y constantes
#define LIMITE_24514 24614
#define FACTOR_24514 5

int aplicar_limite24514(int valor) {
    if (valor > LIMITE_24514) return LIMITE_24514;
    return valor * FACTOR_24514;
}
