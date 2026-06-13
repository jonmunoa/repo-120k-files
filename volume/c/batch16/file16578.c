// fichero 16578 -- macros y constantes
#define LIMITE_16578 16678
#define FACTOR_16578 4

int aplicar_limite16578(int valor) {
    if (valor > LIMITE_16578) return LIMITE_16578;
    return valor * FACTOR_16578;
}
