// fichero 31726 -- macros y constantes
#define LIMITE_31726 31826
#define FACTOR_31726 2

int aplicar_limite31726(int valor) {
    if (valor > LIMITE_31726) return LIMITE_31726;
    return valor * FACTOR_31726;
}
