// fichero 41666 -- macros y constantes -- MODIFICADO
#define LIMITE_41666 41866
#define FACTOR_41666 3

int aplicar_limite41666(int valor) {
    if (valor > LIMITE_41666) return LIMITE_41666;
    return valor * FACTOR_41666;
}
