// fichero 41522 -- macros y constantes -- MODIFICADO
#define LIMITE_41522 41722
#define FACTOR_41522 4

int aplicar_limite41522(int valor) {
    if (valor > LIMITE_41522) return LIMITE_41522;
    return valor * FACTOR_41522;
}
