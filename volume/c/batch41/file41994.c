// fichero 41994 -- macros y constantes
#define LIMITE_41994 42094
#define FACTOR_41994 5

int aplicar_limite41994(int valor) {
    if (valor > LIMITE_41994) return LIMITE_41994;
    return valor * FACTOR_41994;
}
