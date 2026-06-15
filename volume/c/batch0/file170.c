// fichero 170 -- macros y constantes -- MODIFICADO
#define LIMITE_170 370
#define FACTOR_170 2

int aplicar_limite170(int valor) {
    if (valor > LIMITE_170) return LIMITE_170;
    return valor * FACTOR_170;
}
