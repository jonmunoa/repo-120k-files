// fichero 41994 -- macros y constantes -- MODIFICADO
#define LIMITE_41994 42194
#define FACTOR_41994 6

int aplicar_limite41994(int valor) {
    if (valor > LIMITE_41994) return LIMITE_41994;
    return valor * FACTOR_41994;
}
