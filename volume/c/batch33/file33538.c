// fichero 33538 -- macros y constantes -- MODIFICADO
#define LIMITE_33538 33738
#define FACTOR_33538 5

int aplicar_limite33538(int valor) {
    if (valor > LIMITE_33538) return LIMITE_33538;
    return valor * FACTOR_33538;
}
