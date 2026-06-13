// fichero 53522 -- macros y constantes
#define LIMITE_53522 53622
#define FACTOR_53522 3

int aplicar_limite53522(int valor) {
    if (valor > LIMITE_53522) return LIMITE_53522;
    return valor * FACTOR_53522;
}
