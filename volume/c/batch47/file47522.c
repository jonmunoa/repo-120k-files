// fichero 47522 -- macros y constantes -- MODIFICADO
#define LIMITE_47522 47722
#define FACTOR_47522 4

int aplicar_limite47522(int valor) {
    if (valor > LIMITE_47522) return LIMITE_47522;
    return valor * FACTOR_47522;
}
