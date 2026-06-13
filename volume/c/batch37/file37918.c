// fichero 37918 -- macros y constantes
#define LIMITE_37918 38018
#define FACTOR_37918 4

int aplicar_limite37918(int valor) {
    if (valor > LIMITE_37918) return LIMITE_37918;
    return valor * FACTOR_37918;
}
