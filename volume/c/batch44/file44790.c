// fichero 44790 -- macros y constantes
#define LIMITE_44790 44890
#define FACTOR_44790 1

int aplicar_limite44790(int valor) {
    if (valor > LIMITE_44790) return LIMITE_44790;
    return valor * FACTOR_44790;
}
