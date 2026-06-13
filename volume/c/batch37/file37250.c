// fichero 37250 -- macros y constantes
#define LIMITE_37250 37350
#define FACTOR_37250 1

int aplicar_limite37250(int valor) {
    if (valor > LIMITE_37250) return LIMITE_37250;
    return valor * FACTOR_37250;
}
