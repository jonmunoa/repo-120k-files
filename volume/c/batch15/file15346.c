// fichero 15346 -- macros y constantes -- MODIFICADO
#define LIMITE_15346 15546
#define FACTOR_15346 3

int aplicar_limite15346(int valor) {
    if (valor > LIMITE_15346) return LIMITE_15346;
    return valor * FACTOR_15346;
}
