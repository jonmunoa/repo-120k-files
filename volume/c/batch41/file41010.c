// fichero 41010 -- macros y constantes
#define LIMITE_41010 41110
#define FACTOR_41010 1

int aplicar_limite41010(int valor) {
    if (valor > LIMITE_41010) return LIMITE_41010;
    return valor * FACTOR_41010;
}
