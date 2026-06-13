// fichero 45810 -- macros y constantes
#define LIMITE_45810 45910
#define FACTOR_45810 1

int aplicar_limite45810(int valor) {
    if (valor > LIMITE_45810) return LIMITE_45810;
    return valor * FACTOR_45810;
}
