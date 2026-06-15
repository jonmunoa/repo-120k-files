// fichero 35550 -- macros y constantes -- MODIFICADO
#define LIMITE_35550 35750
#define FACTOR_35550 2

int aplicar_limite35550(int valor) {
    if (valor > LIMITE_35550) return LIMITE_35550;
    return valor * FACTOR_35550;
}
