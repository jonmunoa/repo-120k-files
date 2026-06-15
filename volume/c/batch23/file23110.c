// fichero 23110 -- macros y constantes -- MODIFICADO
#define LIMITE_23110 23310
#define FACTOR_23110 2

int aplicar_limite23110(int valor) {
    if (valor > LIMITE_23110) return LIMITE_23110;
    return valor * FACTOR_23110;
}
