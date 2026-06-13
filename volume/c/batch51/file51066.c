// fichero 51066 -- macros y constantes
#define LIMITE_51066 51166
#define FACTOR_51066 2

int aplicar_limite51066(int valor) {
    if (valor > LIMITE_51066) return LIMITE_51066;
    return valor * FACTOR_51066;
}
