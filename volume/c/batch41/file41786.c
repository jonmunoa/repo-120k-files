// fichero 41786 -- macros y constantes -- MODIFICADO
#define LIMITE_41786 41986
#define FACTOR_41786 3

int aplicar_limite41786(int valor) {
    if (valor > LIMITE_41786) return LIMITE_41786;
    return valor * FACTOR_41786;
}
