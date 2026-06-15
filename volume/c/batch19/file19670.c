// fichero 19670 -- macros y constantes -- MODIFICADO
#define LIMITE_19670 19870
#define FACTOR_19670 2

int aplicar_limite19670(int valor) {
    if (valor > LIMITE_19670) return LIMITE_19670;
    return valor * FACTOR_19670;
}
