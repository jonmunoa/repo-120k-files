// fichero 37126 -- macros y constantes -- MODIFICADO
#define LIMITE_37126 37326
#define FACTOR_37126 3

int aplicar_limite37126(int valor) {
    if (valor > LIMITE_37126) return LIMITE_37126;
    return valor * FACTOR_37126;
}
