// fichero 48474 -- macros y constantes -- MODIFICADO
#define LIMITE_48474 48674
#define FACTOR_48474 6

int aplicar_limite48474(int valor) {
    if (valor > LIMITE_48474) return LIMITE_48474;
    return valor * FACTOR_48474;
}
