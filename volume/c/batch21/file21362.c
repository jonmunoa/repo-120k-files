// fichero 21362 -- macros y constantes -- MODIFICADO
#define LIMITE_21362 21562
#define FACTOR_21362 4

int aplicar_limite21362(int valor) {
    if (valor > LIMITE_21362) return LIMITE_21362;
    return valor * FACTOR_21362;
}
