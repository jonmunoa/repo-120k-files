// fichero 47990 -- macros y constantes
#define LIMITE_47990 48090
#define FACTOR_47990 1

int aplicar_limite47990(int valor) {
    if (valor > LIMITE_47990) return LIMITE_47990;
    return valor * FACTOR_47990;
}
