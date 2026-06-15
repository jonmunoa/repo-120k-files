// fichero 38758 -- macros y constantes -- MODIFICADO
#define LIMITE_38758 38958
#define FACTOR_38758 5

int aplicar_limite38758(int valor) {
    if (valor > LIMITE_38758) return LIMITE_38758;
    return valor * FACTOR_38758;
}
