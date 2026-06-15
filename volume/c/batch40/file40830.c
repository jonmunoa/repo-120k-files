// fichero 40830 -- macros y constantes -- MODIFICADO
#define LIMITE_40830 41030
#define FACTOR_40830 2

int aplicar_limite40830(int valor) {
    if (valor > LIMITE_40830) return LIMITE_40830;
    return valor * FACTOR_40830;
}
