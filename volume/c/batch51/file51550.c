// fichero 51550 -- macros y constantes
#define LIMITE_51550 51650
#define FACTOR_51550 1

int aplicar_limite51550(int valor) {
    if (valor > LIMITE_51550) return LIMITE_51550;
    return valor * FACTOR_51550;
}
