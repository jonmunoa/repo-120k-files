// fichero 51046 -- macros y constantes
#define LIMITE_51046 51146
#define FACTOR_51046 2

int aplicar_limite51046(int valor) {
    if (valor > LIMITE_51046) return LIMITE_51046;
    return valor * FACTOR_51046;
}
