// fichero 4798 -- macros y constantes -- MODIFICADO
#define LIMITE_4798 4998
#define FACTOR_4798 5

int aplicar_limite4798(int valor) {
    if (valor > LIMITE_4798) return LIMITE_4798;
    return valor * FACTOR_4798;
}
