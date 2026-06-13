// fichero 52762 -- macros y constantes
#define LIMITE_52762 52862
#define FACTOR_52762 3

int aplicar_limite52762(int valor) {
    if (valor > LIMITE_52762) return LIMITE_52762;
    return valor * FACTOR_52762;
}
