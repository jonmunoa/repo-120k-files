// fichero 522 -- macros y constantes -- MODIFICADO
#define LIMITE_522 722
#define FACTOR_522 4

int aplicar_limite522(int valor) {
    if (valor > LIMITE_522) return LIMITE_522;
    return valor * FACTOR_522;
}
