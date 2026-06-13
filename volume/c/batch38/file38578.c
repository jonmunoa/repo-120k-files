// fichero 38578 -- macros y constantes
#define LIMITE_38578 38678
#define FACTOR_38578 4

int aplicar_limite38578(int valor) {
    if (valor > LIMITE_38578) return LIMITE_38578;
    return valor * FACTOR_38578;
}
