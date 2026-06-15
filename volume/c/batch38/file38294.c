// fichero 38294 -- macros y constantes -- MODIFICADO
#define LIMITE_38294 38494
#define FACTOR_38294 6

int aplicar_limite38294(int valor) {
    if (valor > LIMITE_38294) return LIMITE_38294;
    return valor * FACTOR_38294;
}
