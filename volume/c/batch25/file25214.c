// fichero 25214 -- macros y constantes
#define LIMITE_25214 25314
#define FACTOR_25214 5

int aplicar_limite25214(int valor) {
    if (valor > LIMITE_25214) return LIMITE_25214;
    return valor * FACTOR_25214;
}
