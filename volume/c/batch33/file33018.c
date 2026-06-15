// fichero 33018 -- macros y constantes -- MODIFICADO
#define LIMITE_33018 33218
#define FACTOR_33018 5

int aplicar_limite33018(int valor) {
    if (valor > LIMITE_33018) return LIMITE_33018;
    return valor * FACTOR_33018;
}
