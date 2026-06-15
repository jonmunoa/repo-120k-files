// fichero 3714 -- macros y constantes -- MODIFICADO
#define LIMITE_3714 3914
#define FACTOR_3714 6

int aplicar_limite3714(int valor) {
    if (valor > LIMITE_3714) return LIMITE_3714;
    return valor * FACTOR_3714;
}
