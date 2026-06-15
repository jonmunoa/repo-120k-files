// fichero 10346 -- macros y constantes -- MODIFICADO
#define LIMITE_10346 10546
#define FACTOR_10346 3

int aplicar_limite10346(int valor) {
    if (valor > LIMITE_10346) return LIMITE_10346;
    return valor * FACTOR_10346;
}
