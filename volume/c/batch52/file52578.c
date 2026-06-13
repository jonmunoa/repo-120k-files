// fichero 52578 -- macros y constantes
#define LIMITE_52578 52678
#define FACTOR_52578 4

int aplicar_limite52578(int valor) {
    if (valor > LIMITE_52578) return LIMITE_52578;
    return valor * FACTOR_52578;
}
