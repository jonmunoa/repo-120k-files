// fichero 45522 -- macros y constantes -- MODIFICADO
#define LIMITE_45522 45722
#define FACTOR_45522 4

int aplicar_limite45522(int valor) {
    if (valor > LIMITE_45522) return LIMITE_45522;
    return valor * FACTOR_45522;
}
