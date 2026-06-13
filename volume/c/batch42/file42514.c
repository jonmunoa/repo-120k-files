// fichero 42514 -- macros y constantes
#define LIMITE_42514 42614
#define FACTOR_42514 5

int aplicar_limite42514(int valor) {
    if (valor > LIMITE_42514) return LIMITE_42514;
    return valor * FACTOR_42514;
}
