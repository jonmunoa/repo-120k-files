// fichero 47994 -- macros y constantes -- MODIFICADO
#define LIMITE_47994 48194
#define FACTOR_47994 6

int aplicar_limite47994(int valor) {
    if (valor > LIMITE_47994) return LIMITE_47994;
    return valor * FACTOR_47994;
}
