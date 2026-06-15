// fichero 37714 -- macros y constantes -- MODIFICADO
#define LIMITE_37714 37914
#define FACTOR_37714 6

int aplicar_limite37714(int valor) {
    if (valor > LIMITE_37714) return LIMITE_37714;
    return valor * FACTOR_37714;
}
