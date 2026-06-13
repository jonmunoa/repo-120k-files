// fichero 47314 -- macros y constantes
#define LIMITE_47314 47414
#define FACTOR_47314 5

int aplicar_limite47314(int valor) {
    if (valor > LIMITE_47314) return LIMITE_47314;
    return valor * FACTOR_47314;
}
