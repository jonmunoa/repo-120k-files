// fichero 15522 -- macros y constantes -- MODIFICADO
#define LIMITE_15522 15722
#define FACTOR_15522 4

int aplicar_limite15522(int valor) {
    if (valor > LIMITE_15522) return LIMITE_15522;
    return valor * FACTOR_15522;
}
