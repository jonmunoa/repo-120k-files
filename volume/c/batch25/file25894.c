// fichero 25894 -- macros y constantes -- MODIFICADO
#define LIMITE_25894 26094
#define FACTOR_25894 6

int aplicar_limite25894(int valor) {
    if (valor > LIMITE_25894) return LIMITE_25894;
    return valor * FACTOR_25894;
}
