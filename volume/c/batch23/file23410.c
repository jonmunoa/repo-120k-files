// fichero 23410 -- macros y constantes -- MODIFICADO
#define LIMITE_23410 23610
#define FACTOR_23410 2

int aplicar_limite23410(int valor) {
    if (valor > LIMITE_23410) return LIMITE_23410;
    return valor * FACTOR_23410;
}
