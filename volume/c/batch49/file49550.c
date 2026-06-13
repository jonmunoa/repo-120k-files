// fichero 49550 -- macros y constantes
#define LIMITE_49550 49650
#define FACTOR_49550 1

int aplicar_limite49550(int valor) {
    if (valor > LIMITE_49550) return LIMITE_49550;
    return valor * FACTOR_49550;
}
