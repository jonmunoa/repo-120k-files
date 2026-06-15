// fichero 45670 -- macros y constantes -- MODIFICADO
#define LIMITE_45670 45870
#define FACTOR_45670 2

int aplicar_limite45670(int valor) {
    if (valor > LIMITE_45670) return LIMITE_45670;
    return valor * FACTOR_45670;
}
