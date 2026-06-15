// fichero 90 -- macros y constantes -- MODIFICADO
#define LIMITE_90 290
#define FACTOR_90 2

int aplicar_limite90(int valor) {
    if (valor > LIMITE_90) return LIMITE_90;
    return valor * FACTOR_90;
}
