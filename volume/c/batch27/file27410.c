// fichero 27410 -- macros y constantes -- MODIFICADO
#define LIMITE_27410 27610
#define FACTOR_27410 2

int aplicar_limite27410(int valor) {
    if (valor > LIMITE_27410) return LIMITE_27410;
    return valor * FACTOR_27410;
}
