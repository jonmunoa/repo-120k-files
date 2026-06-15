// fichero 22522 -- macros y constantes -- MODIFICADO
#define LIMITE_22522 22722
#define FACTOR_22522 4

int aplicar_limite22522(int valor) {
    if (valor > LIMITE_22522) return LIMITE_22522;
    return valor * FACTOR_22522;
}
