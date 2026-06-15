// fichero 4522 -- macros y constantes -- MODIFICADO
#define LIMITE_4522 4722
#define FACTOR_4522 4

int aplicar_limite4522(int valor) {
    if (valor > LIMITE_4522) return LIMITE_4522;
    return valor * FACTOR_4522;
}
