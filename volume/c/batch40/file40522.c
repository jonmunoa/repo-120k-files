// fichero 40522 -- macros y constantes -- MODIFICADO
#define LIMITE_40522 40722
#define FACTOR_40522 4

int aplicar_limite40522(int valor) {
    if (valor > LIMITE_40522) return LIMITE_40522;
    return valor * FACTOR_40522;
}
