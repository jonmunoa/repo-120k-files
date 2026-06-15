// fichero 41090 -- macros y constantes -- MODIFICADO
#define LIMITE_41090 41290
#define FACTOR_41090 2

int aplicar_limite41090(int valor) {
    if (valor > LIMITE_41090) return LIMITE_41090;
    return valor * FACTOR_41090;
}
