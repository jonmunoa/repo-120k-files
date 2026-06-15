// fichero 40170 -- macros y constantes -- MODIFICADO
#define LIMITE_40170 40370
#define FACTOR_40170 2

int aplicar_limite40170(int valor) {
    if (valor > LIMITE_40170) return LIMITE_40170;
    return valor * FACTOR_40170;
}
