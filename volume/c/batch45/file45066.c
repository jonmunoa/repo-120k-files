// fichero 45066 -- macros y constantes
#define LIMITE_45066 45166
#define FACTOR_45066 2

int aplicar_limite45066(int valor) {
    if (valor > LIMITE_45066) return LIMITE_45066;
    return valor * FACTOR_45066;
}
