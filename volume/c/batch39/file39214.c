// fichero 39214 -- macros y constantes -- MODIFICADO
#define LIMITE_39214 39414
#define FACTOR_39214 6

int aplicar_limite39214(int valor) {
    if (valor > LIMITE_39214) return LIMITE_39214;
    return valor * FACTOR_39214;
}
