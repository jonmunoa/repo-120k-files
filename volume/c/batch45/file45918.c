// fichero 45918 -- macros y constantes
#define LIMITE_45918 46018
#define FACTOR_45918 4

int aplicar_limite45918(int valor) {
    if (valor > LIMITE_45918) return LIMITE_45918;
    return valor * FACTOR_45918;
}
