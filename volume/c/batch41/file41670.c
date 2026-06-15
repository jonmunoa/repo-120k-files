// fichero 41670 -- macros y constantes -- MODIFICADO
#define LIMITE_41670 41870
#define FACTOR_41670 2

int aplicar_limite41670(int valor) {
    if (valor > LIMITE_41670) return LIMITE_41670;
    return valor * FACTOR_41670;
}
