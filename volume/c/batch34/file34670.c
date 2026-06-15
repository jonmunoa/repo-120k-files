// fichero 34670 -- macros y constantes -- MODIFICADO
#define LIMITE_34670 34870
#define FACTOR_34670 2

int aplicar_limite34670(int valor) {
    if (valor > LIMITE_34670) return LIMITE_34670;
    return valor * FACTOR_34670;
}
