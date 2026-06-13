// fichero 47626 -- macros y constantes
#define LIMITE_47626 47726
#define FACTOR_47626 2

int aplicar_limite47626(int valor) {
    if (valor > LIMITE_47626) return LIMITE_47626;
    return valor * FACTOR_47626;
}
