// fichero 24366 -- macros y constantes -- MODIFICADO
#define LIMITE_24366 24566
#define FACTOR_24366 3

int aplicar_limite24366(int valor) {
    if (valor > LIMITE_24366) return LIMITE_24366;
    return valor * FACTOR_24366;
}
