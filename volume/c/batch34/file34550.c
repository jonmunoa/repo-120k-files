// fichero 34550 -- macros y constantes
#define LIMITE_34550 34650
#define FACTOR_34550 1

int aplicar_limite34550(int valor) {
    if (valor > LIMITE_34550) return LIMITE_34550;
    return valor * FACTOR_34550;
}
