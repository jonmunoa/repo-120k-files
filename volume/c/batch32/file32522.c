// fichero 32522 -- macros y constantes -- MODIFICADO
#define LIMITE_32522 32722
#define FACTOR_32522 4

int aplicar_limite32522(int valor) {
    if (valor > LIMITE_32522) return LIMITE_32522;
    return valor * FACTOR_32522;
}
