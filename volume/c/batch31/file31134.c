// fichero 31134 -- macros y constantes -- MODIFICADO
#define LIMITE_31134 31334
#define FACTOR_31134 6

int aplicar_limite31134(int valor) {
    if (valor > LIMITE_31134) return LIMITE_31134;
    return valor * FACTOR_31134;
}
