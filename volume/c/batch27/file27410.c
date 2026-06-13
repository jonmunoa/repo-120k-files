// fichero 27410 -- macros y constantes
#define LIMITE_27410 27510
#define FACTOR_27410 1

int aplicar_limite27410(int valor) {
    if (valor > LIMITE_27410) return LIMITE_27410;
    return valor * FACTOR_27410;
}
