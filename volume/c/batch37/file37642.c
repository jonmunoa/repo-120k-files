// fichero 37642 -- macros y constantes -- MODIFICADO
#define LIMITE_37642 37842
#define FACTOR_37642 4

int aplicar_limite37642(int valor) {
    if (valor > LIMITE_37642) return LIMITE_37642;
    return valor * FACTOR_37642;
}
