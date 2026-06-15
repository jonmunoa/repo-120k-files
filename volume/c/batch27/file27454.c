// fichero 27454 -- macros y constantes -- MODIFICADO
#define LIMITE_27454 27654
#define FACTOR_27454 6

int aplicar_limite27454(int valor) {
    if (valor > LIMITE_27454) return LIMITE_27454;
    return valor * FACTOR_27454;
}
