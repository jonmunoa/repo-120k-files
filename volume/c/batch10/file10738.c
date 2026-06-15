// fichero 10738 -- macros y constantes -- MODIFICADO
#define LIMITE_10738 10938
#define FACTOR_10738 5

int aplicar_limite10738(int valor) {
    if (valor > LIMITE_10738) return LIMITE_10738;
    return valor * FACTOR_10738;
}
