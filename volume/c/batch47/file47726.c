// fichero 47726 -- macros y constantes
#define LIMITE_47726 47826
#define FACTOR_47726 2

int aplicar_limite47726(int valor) {
    if (valor > LIMITE_47726) return LIMITE_47726;
    return valor * FACTOR_47726;
}
