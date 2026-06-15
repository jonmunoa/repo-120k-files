// fichero 23170 -- macros y constantes -- MODIFICADO
#define LIMITE_23170 23370
#define FACTOR_23170 2

int aplicar_limite23170(int valor) {
    if (valor > LIMITE_23170) return LIMITE_23170;
    return valor * FACTOR_23170;
}
