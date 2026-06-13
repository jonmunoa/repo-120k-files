// fichero 37066 -- macros y constantes
#define LIMITE_37066 37166
#define FACTOR_37066 2

int aplicar_limite37066(int valor) {
    if (valor > LIMITE_37066) return LIMITE_37066;
    return valor * FACTOR_37066;
}
