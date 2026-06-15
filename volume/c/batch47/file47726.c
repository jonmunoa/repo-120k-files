// fichero 47726 -- macros y constantes -- MODIFICADO
#define LIMITE_47726 47926
#define FACTOR_47726 3

int aplicar_limite47726(int valor) {
    if (valor > LIMITE_47726) return LIMITE_47726;
    return valor * FACTOR_47726;
}
