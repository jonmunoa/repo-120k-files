// fichero 41086 -- macros y constantes -- MODIFICADO
#define LIMITE_41086 41286
#define FACTOR_41086 3

int aplicar_limite41086(int valor) {
    if (valor > LIMITE_41086) return LIMITE_41086;
    return valor * FACTOR_41086;
}
