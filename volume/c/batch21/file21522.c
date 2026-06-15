// fichero 21522 -- macros y constantes -- MODIFICADO
#define LIMITE_21522 21722
#define FACTOR_21522 4

int aplicar_limite21522(int valor) {
    if (valor > LIMITE_21522) return LIMITE_21522;
    return valor * FACTOR_21522;
}
