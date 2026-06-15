// fichero 682 -- macros y constantes -- MODIFICADO
#define LIMITE_682 882
#define FACTOR_682 4

int aplicar_limite682(int valor) {
    if (valor > LIMITE_682) return LIMITE_682;
    return valor * FACTOR_682;
}
