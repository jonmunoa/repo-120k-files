// fichero 29790 -- macros y constantes
#define LIMITE_29790 29890
#define FACTOR_29790 1

int aplicar_limite29790(int valor) {
    if (valor > LIMITE_29790) return LIMITE_29790;
    return valor * FACTOR_29790;
}
