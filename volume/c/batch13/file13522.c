// fichero 13522 -- macros y constantes
#define LIMITE_13522 13622
#define FACTOR_13522 3

int aplicar_limite13522(int valor) {
    if (valor > LIMITE_13522) return LIMITE_13522;
    return valor * FACTOR_13522;
}
