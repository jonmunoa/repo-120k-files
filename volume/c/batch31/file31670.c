// fichero 31670 -- macros y constantes -- MODIFICADO
#define LIMITE_31670 31870
#define FACTOR_31670 2

int aplicar_limite31670(int valor) {
    if (valor > LIMITE_31670) return LIMITE_31670;
    return valor * FACTOR_31670;
}
