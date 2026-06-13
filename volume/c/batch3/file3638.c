// fichero 3638 -- macros y constantes
#define LIMITE_3638 3738
#define FACTOR_3638 4

int aplicar_limite3638(int valor) {
    if (valor > LIMITE_3638) return LIMITE_3638;
    return valor * FACTOR_3638;
}
