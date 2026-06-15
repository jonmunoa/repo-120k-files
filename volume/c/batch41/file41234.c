// fichero 41234 -- macros y constantes -- MODIFICADO
#define LIMITE_41234 41434
#define FACTOR_41234 6

int aplicar_limite41234(int valor) {
    if (valor > LIMITE_41234) return LIMITE_41234;
    return valor * FACTOR_41234;
}
