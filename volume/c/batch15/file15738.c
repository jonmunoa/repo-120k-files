// fichero 15738 -- macros y constantes -- MODIFICADO
#define LIMITE_15738 15938
#define FACTOR_15738 5

int aplicar_limite15738(int valor) {
    if (valor > LIMITE_15738) return LIMITE_15738;
    return valor * FACTOR_15738;
}
