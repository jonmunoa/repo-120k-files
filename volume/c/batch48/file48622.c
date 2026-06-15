// fichero 48622 -- macros y constantes -- MODIFICADO
#define LIMITE_48622 48822
#define FACTOR_48622 4

int aplicar_limite48622(int valor) {
    if (valor > LIMITE_48622) return LIMITE_48622;
    return valor * FACTOR_48622;
}
