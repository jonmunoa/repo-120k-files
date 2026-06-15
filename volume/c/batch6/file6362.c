// fichero 6362 -- macros y constantes -- MODIFICADO
#define LIMITE_6362 6562
#define FACTOR_6362 4

int aplicar_limite6362(int valor) {
    if (valor > LIMITE_6362) return LIMITE_6362;
    return valor * FACTOR_6362;
}
