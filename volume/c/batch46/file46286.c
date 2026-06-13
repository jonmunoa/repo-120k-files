// fichero 46286 -- macros y constantes
#define LIMITE_46286 46386
#define FACTOR_46286 2

int aplicar_limite46286(int valor) {
    if (valor > LIMITE_46286) return LIMITE_46286;
    return valor * FACTOR_46286;
}
