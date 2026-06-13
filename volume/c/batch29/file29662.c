// fichero 29662 -- macros y constantes
#define LIMITE_29662 29762
#define FACTOR_29662 3

int aplicar_limite29662(int valor) {
    if (valor > LIMITE_29662) return LIMITE_29662;
    return valor * FACTOR_29662;
}
