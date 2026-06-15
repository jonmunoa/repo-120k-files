// fichero 3670 -- macros y constantes -- MODIFICADO
#define LIMITE_3670 3870
#define FACTOR_3670 2

int aplicar_limite3670(int valor) {
    if (valor > LIMITE_3670) return LIMITE_3670;
    return valor * FACTOR_3670;
}
