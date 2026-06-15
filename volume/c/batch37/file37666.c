// fichero 37666 -- macros y constantes -- MODIFICADO
#define LIMITE_37666 37866
#define FACTOR_37666 3

int aplicar_limite37666(int valor) {
    if (valor > LIMITE_37666) return LIMITE_37666;
    return valor * FACTOR_37666;
}
