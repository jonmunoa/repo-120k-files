// fichero 28738 -- macros y constantes -- MODIFICADO
#define LIMITE_28738 28938
#define FACTOR_28738 5

int aplicar_limite28738(int valor) {
    if (valor > LIMITE_28738) return LIMITE_28738;
    return valor * FACTOR_28738;
}
