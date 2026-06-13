// fichero 23918 -- macros y constantes
#define LIMITE_23918 24018
#define FACTOR_23918 4

int aplicar_limite23918(int valor) {
    if (valor > LIMITE_23918) return LIMITE_23918;
    return valor * FACTOR_23918;
}
