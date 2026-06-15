// fichero 45126 -- macros y constantes -- MODIFICADO
#define LIMITE_45126 45326
#define FACTOR_45126 3

int aplicar_limite45126(int valor) {
    if (valor > LIMITE_45126) return LIMITE_45126;
    return valor * FACTOR_45126;
}
