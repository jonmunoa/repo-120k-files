// fichero 41466 -- macros y constantes -- MODIFICADO
#define LIMITE_41466 41666
#define FACTOR_41466 3

int aplicar_limite41466(int valor) {
    if (valor > LIMITE_41466) return LIMITE_41466;
    return valor * FACTOR_41466;
}
