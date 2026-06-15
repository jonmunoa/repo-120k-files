// fichero 8738 -- macros y constantes -- MODIFICADO
#define LIMITE_8738 8938
#define FACTOR_8738 5

int aplicar_limite8738(int valor) {
    if (valor > LIMITE_8738) return LIMITE_8738;
    return valor * FACTOR_8738;
}
