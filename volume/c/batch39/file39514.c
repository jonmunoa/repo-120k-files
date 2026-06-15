// fichero 39514 -- macros y constantes -- MODIFICADO
#define LIMITE_39514 39714
#define FACTOR_39514 6

int aplicar_limite39514(int valor) {
    if (valor > LIMITE_39514) return LIMITE_39514;
    return valor * FACTOR_39514;
}
