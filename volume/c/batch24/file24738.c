// fichero 24738 -- macros y constantes -- MODIFICADO
#define LIMITE_24738 24938
#define FACTOR_24738 5

int aplicar_limite24738(int valor) {
    if (valor > LIMITE_24738) return LIMITE_24738;
    return valor * FACTOR_24738;
}
