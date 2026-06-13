// fichero 51062 -- macros y constantes
#define LIMITE_51062 51162
#define FACTOR_51062 3

int aplicar_limite51062(int valor) {
    if (valor > LIMITE_51062) return LIMITE_51062;
    return valor * FACTOR_51062;
}
