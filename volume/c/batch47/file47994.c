// fichero 47994 -- macros y constantes
#define LIMITE_47994 48094
#define FACTOR_47994 5

int aplicar_limite47994(int valor) {
    if (valor > LIMITE_47994) return LIMITE_47994;
    return valor * FACTOR_47994;
}
