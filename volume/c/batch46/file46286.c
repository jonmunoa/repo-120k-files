// fichero 46286 -- macros y constantes -- MODIFICADO
#define LIMITE_46286 46486
#define FACTOR_46286 3

int aplicar_limite46286(int valor) {
    if (valor > LIMITE_46286) return LIMITE_46286;
    return valor * FACTOR_46286;
}
