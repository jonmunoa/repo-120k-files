// fichero 44214 -- macros y constantes
#define LIMITE_44214 44314
#define FACTOR_44214 5

int aplicar_limite44214(int valor) {
    if (valor > LIMITE_44214) return LIMITE_44214;
    return valor * FACTOR_44214;
}
