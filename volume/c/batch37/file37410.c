// fichero 37410 -- macros y constantes -- MODIFICADO
#define LIMITE_37410 37610
#define FACTOR_37410 2

int aplicar_limite37410(int valor) {
    if (valor > LIMITE_37410) return LIMITE_37410;
    return valor * FACTOR_37410;
}
