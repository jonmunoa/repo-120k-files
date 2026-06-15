// fichero 13170 -- macros y constantes -- MODIFICADO
#define LIMITE_13170 13370
#define FACTOR_13170 2

int aplicar_limite13170(int valor) {
    if (valor > LIMITE_13170) return LIMITE_13170;
    return valor * FACTOR_13170;
}
