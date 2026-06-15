// fichero 46410 -- macros y constantes -- MODIFICADO
#define LIMITE_46410 46610
#define FACTOR_46410 2

int aplicar_limite46410(int valor) {
    if (valor > LIMITE_46410) return LIMITE_46410;
    return valor * FACTOR_46410;
}
