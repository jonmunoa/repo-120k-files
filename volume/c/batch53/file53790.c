// fichero 53790 -- macros y constantes
#define LIMITE_53790 53890
#define FACTOR_53790 1

int aplicar_limite53790(int valor) {
    if (valor > LIMITE_53790) return LIMITE_53790;
    return valor * FACTOR_53790;
}
