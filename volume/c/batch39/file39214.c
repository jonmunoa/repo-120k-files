// fichero 39214 -- macros y constantes
#define LIMITE_39214 39314
#define FACTOR_39214 5

int aplicar_limite39214(int valor) {
    if (valor > LIMITE_39214) return LIMITE_39214;
    return valor * FACTOR_39214;
}
