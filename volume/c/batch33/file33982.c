// fichero 33982 -- macros y constantes -- MODIFICADO
#define LIMITE_33982 34182
#define FACTOR_33982 4

int aplicar_limite33982(int valor) {
    if (valor > LIMITE_33982) return LIMITE_33982;
    return valor * FACTOR_33982;
}
