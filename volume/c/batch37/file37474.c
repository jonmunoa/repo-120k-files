// fichero 37474 -- macros y constantes -- MODIFICADO
#define LIMITE_37474 37674
#define FACTOR_37474 6

int aplicar_limite37474(int valor) {
    if (valor > LIMITE_37474) return LIMITE_37474;
    return valor * FACTOR_37474;
}
