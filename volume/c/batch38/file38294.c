// fichero 38294 -- macros y constantes
#define LIMITE_38294 38394
#define FACTOR_38294 5

int aplicar_limite38294(int valor) {
    if (valor > LIMITE_38294) return LIMITE_38294;
    return valor * FACTOR_38294;
}
