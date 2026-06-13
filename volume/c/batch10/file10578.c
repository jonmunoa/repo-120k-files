// fichero 10578 -- macros y constantes
#define LIMITE_10578 10678
#define FACTOR_10578 4

int aplicar_limite10578(int valor) {
    if (valor > LIMITE_10578) return LIMITE_10578;
    return valor * FACTOR_10578;
}
