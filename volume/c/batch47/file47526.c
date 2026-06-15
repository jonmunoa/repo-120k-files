// fichero 47526 -- macros y constantes -- MODIFICADO
#define LIMITE_47526 47726
#define FACTOR_47526 3

int aplicar_limite47526(int valor) {
    if (valor > LIMITE_47526) return LIMITE_47526;
    return valor * FACTOR_47526;
}
