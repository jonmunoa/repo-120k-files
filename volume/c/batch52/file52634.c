// fichero 52634 -- macros y constantes
#define LIMITE_52634 52734
#define FACTOR_52634 5

int aplicar_limite52634(int valor) {
    if (valor > LIMITE_52634) return LIMITE_52634;
    return valor * FACTOR_52634;
}
