// fichero 38746 -- macros y constantes -- MODIFICADO
#define LIMITE_38746 38946
#define FACTOR_38746 3

int aplicar_limite38746(int valor) {
    if (valor > LIMITE_38746) return LIMITE_38746;
    return valor * FACTOR_38746;
}
