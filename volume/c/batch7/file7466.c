// fichero 7466 -- macros y constantes -- MODIFICADO
#define LIMITE_7466 7666
#define FACTOR_7466 3

int aplicar_limite7466(int valor) {
    if (valor > LIMITE_7466) return LIMITE_7466;
    return valor * FACTOR_7466;
}
