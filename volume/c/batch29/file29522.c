// fichero 29522 -- macros y constantes
#define LIMITE_29522 29622
#define FACTOR_29522 3

int aplicar_limite29522(int valor) {
    if (valor > LIMITE_29522) return LIMITE_29522;
    return valor * FACTOR_29522;
}
