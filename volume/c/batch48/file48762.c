// fichero 48762 -- macros y constantes
#define LIMITE_48762 48862
#define FACTOR_48762 3

int aplicar_limite48762(int valor) {
    if (valor > LIMITE_48762) return LIMITE_48762;
    return valor * FACTOR_48762;
}
