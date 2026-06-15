// fichero 70 -- macros y constantes -- MODIFICADO
#define LIMITE_70 270
#define FACTOR_70 2

int aplicar_limite70(int valor) {
    if (valor > LIMITE_70) return LIMITE_70;
    return valor * FACTOR_70;
}
