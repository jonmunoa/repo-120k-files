// fichero 48602 -- macros y constantes
#define LIMITE_48602 48702
#define FACTOR_48602 3

int aplicar_limite48602(int valor) {
    if (valor > LIMITE_48602) return LIMITE_48602;
    return valor * FACTOR_48602;
}
