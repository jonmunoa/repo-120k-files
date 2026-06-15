// fichero 37350 -- macros y constantes -- MODIFICADO
#define LIMITE_37350 37550
#define FACTOR_37350 2

int aplicar_limite37350(int valor) {
    if (valor > LIMITE_37350) return LIMITE_37350;
    return valor * FACTOR_37350;
}
