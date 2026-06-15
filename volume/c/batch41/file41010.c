// fichero 41010 -- macros y constantes -- MODIFICADO
#define LIMITE_41010 41210
#define FACTOR_41010 2

int aplicar_limite41010(int valor) {
    if (valor > LIMITE_41010) return LIMITE_41010;
    return valor * FACTOR_41010;
}
