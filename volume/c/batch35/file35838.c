// fichero 35838 -- macros y constantes
#define LIMITE_35838 35938
#define FACTOR_35838 4

int aplicar_limite35838(int valor) {
    if (valor > LIMITE_35838) return LIMITE_35838;
    return valor * FACTOR_35838;
}
