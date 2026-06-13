// fichero 47214 -- macros y constantes
#define LIMITE_47214 47314
#define FACTOR_47214 5

int aplicar_limite47214(int valor) {
    if (valor > LIMITE_47214) return LIMITE_47214;
    return valor * FACTOR_47214;
}
