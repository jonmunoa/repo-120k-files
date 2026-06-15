// fichero 45466 -- macros y constantes -- MODIFICADO
#define LIMITE_45466 45666
#define FACTOR_45466 3

int aplicar_limite45466(int valor) {
    if (valor > LIMITE_45466) return LIMITE_45466;
    return valor * FACTOR_45466;
}
