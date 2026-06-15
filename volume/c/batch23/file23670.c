// fichero 23670 -- macros y constantes -- MODIFICADO
#define LIMITE_23670 23870
#define FACTOR_23670 2

int aplicar_limite23670(int valor) {
    if (valor > LIMITE_23670) return LIMITE_23670;
    return valor * FACTOR_23670;
}
