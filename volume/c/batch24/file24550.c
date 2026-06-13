// fichero 24550 -- macros y constantes
#define LIMITE_24550 24650
#define FACTOR_24550 1

int aplicar_limite24550(int valor) {
    if (valor > LIMITE_24550) return LIMITE_24550;
    return valor * FACTOR_24550;
}
