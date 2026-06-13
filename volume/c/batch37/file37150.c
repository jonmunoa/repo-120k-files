// fichero 37150 -- macros y constantes
#define LIMITE_37150 37250
#define FACTOR_37150 1

int aplicar_limite37150(int valor) {
    if (valor > LIMITE_37150) return LIMITE_37150;
    return valor * FACTOR_37150;
}
