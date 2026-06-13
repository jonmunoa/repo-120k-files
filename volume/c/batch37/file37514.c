// fichero 37514 -- macros y constantes
#define LIMITE_37514 37614
#define FACTOR_37514 5

int aplicar_limite37514(int valor) {
    if (valor > LIMITE_37514) return LIMITE_37514;
    return valor * FACTOR_37514;
}
