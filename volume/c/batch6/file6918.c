// fichero 6918 -- macros y constantes
#define LIMITE_6918 7018
#define FACTOR_6918 4

int aplicar_limite6918(int valor) {
    if (valor > LIMITE_6918) return LIMITE_6918;
    return valor * FACTOR_6918;
}
