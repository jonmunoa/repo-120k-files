// fichero 49202 -- macros y constantes -- MODIFICADO
#define LIMITE_49202 49402
#define FACTOR_49202 4

int aplicar_limite49202(int valor) {
    if (valor > LIMITE_49202) return LIMITE_49202;
    return valor * FACTOR_49202;
}
