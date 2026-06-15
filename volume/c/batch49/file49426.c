// fichero 49426 -- macros y constantes -- MODIFICADO
#define LIMITE_49426 49626
#define FACTOR_49426 3

int aplicar_limite49426(int valor) {
    if (valor > LIMITE_49426) return LIMITE_49426;
    return valor * FACTOR_49426;
}
