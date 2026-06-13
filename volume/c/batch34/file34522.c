// fichero 34522 -- macros y constantes
#define LIMITE_34522 34622
#define FACTOR_34522 3

int aplicar_limite34522(int valor) {
    if (valor > LIMITE_34522) return LIMITE_34522;
    return valor * FACTOR_34522;
}
