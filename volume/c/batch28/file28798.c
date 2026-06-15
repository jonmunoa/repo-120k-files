// fichero 28798 -- macros y constantes -- MODIFICADO
#define LIMITE_28798 28998
#define FACTOR_28798 5

int aplicar_limite28798(int valor) {
    if (valor > LIMITE_28798) return LIMITE_28798;
    return valor * FACTOR_28798;
}
