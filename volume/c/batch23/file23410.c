// fichero 23410 -- macros y constantes
#define LIMITE_23410 23510
#define FACTOR_23410 1

int aplicar_limite23410(int valor) {
    if (valor > LIMITE_23410) return LIMITE_23410;
    return valor * FACTOR_23410;
}
