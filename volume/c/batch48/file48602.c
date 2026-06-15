// fichero 48602 -- macros y constantes -- MODIFICADO
#define LIMITE_48602 48802
#define FACTOR_48602 4

int aplicar_limite48602(int valor) {
    if (valor > LIMITE_48602) return LIMITE_48602;
    return valor * FACTOR_48602;
}
