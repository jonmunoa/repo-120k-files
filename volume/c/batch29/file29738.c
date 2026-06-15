// fichero 29738 -- macros y constantes -- MODIFICADO
#define LIMITE_29738 29938
#define FACTOR_29738 5

int aplicar_limite29738(int valor) {
    if (valor > LIMITE_29738) return LIMITE_29738;
    return valor * FACTOR_29738;
}
