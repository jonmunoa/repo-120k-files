// fichero 49190 -- macros y constantes -- MODIFICADO
#define LIMITE_49190 49390
#define FACTOR_49190 2

int aplicar_limite49190(int valor) {
    if (valor > LIMITE_49190) return LIMITE_49190;
    return valor * FACTOR_49190;
}
