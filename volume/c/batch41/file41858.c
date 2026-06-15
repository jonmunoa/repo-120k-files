// fichero 41858 -- macros y constantes -- MODIFICADO
#define LIMITE_41858 42058
#define FACTOR_41858 5

int aplicar_limite41858(int valor) {
    if (valor > LIMITE_41858) return LIMITE_41858;
    return valor * FACTOR_41858;
}
