// fichero 44002 -- macros y constantes
#define LIMITE_44002 44102
#define FACTOR_44002 3

int aplicar_limite44002(int valor) {
    if (valor > LIMITE_44002) return LIMITE_44002;
    return valor * FACTOR_44002;
}
