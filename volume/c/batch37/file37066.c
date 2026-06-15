// fichero 37066 -- macros y constantes -- MODIFICADO
#define LIMITE_37066 37266
#define FACTOR_37066 3

int aplicar_limite37066(int valor) {
    if (valor > LIMITE_37066) return LIMITE_37066;
    return valor * FACTOR_37066;
}
