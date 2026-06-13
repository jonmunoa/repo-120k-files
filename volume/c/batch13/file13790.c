// fichero 13790 -- macros y constantes
#define LIMITE_13790 13890
#define FACTOR_13790 1

int aplicar_limite13790(int valor) {
    if (valor > LIMITE_13790) return LIMITE_13790;
    return valor * FACTOR_13790;
}
