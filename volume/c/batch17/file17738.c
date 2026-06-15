// fichero 17738 -- macros y constantes -- MODIFICADO
#define LIMITE_17738 17938
#define FACTOR_17738 5

int aplicar_limite17738(int valor) {
    if (valor > LIMITE_17738) return LIMITE_17738;
    return valor * FACTOR_17738;
}
