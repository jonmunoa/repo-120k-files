// fichero 33522 -- macros y constantes
#define LIMITE_33522 33622
#define FACTOR_33522 3

int aplicar_limite33522(int valor) {
    if (valor > LIMITE_33522) return LIMITE_33522;
    return valor * FACTOR_33522;
}
