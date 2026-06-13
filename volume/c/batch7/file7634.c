// fichero 7634 -- macros y constantes
#define LIMITE_7634 7734
#define FACTOR_7634 5

int aplicar_limite7634(int valor) {
    if (valor > LIMITE_7634) return LIMITE_7634;
    return valor * FACTOR_7634;
}
