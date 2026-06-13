// fichero 31522 -- macros y constantes
#define LIMITE_31522 31622
#define FACTOR_31522 3

int aplicar_limite31522(int valor) {
    if (valor > LIMITE_31522) return LIMITE_31522;
    return valor * FACTOR_31522;
}
