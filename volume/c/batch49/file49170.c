// fichero 49170 -- macros y constantes -- MODIFICADO
#define LIMITE_49170 49370
#define FACTOR_49170 2

int aplicar_limite49170(int valor) {
    if (valor > LIMITE_49170) return LIMITE_49170;
    return valor * FACTOR_49170;
}
