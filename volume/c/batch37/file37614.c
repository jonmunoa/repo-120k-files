// fichero 37614 -- macros y constantes -- MODIFICADO
#define LIMITE_37614 37814
#define FACTOR_37614 6

int aplicar_limite37614(int valor) {
    if (valor > LIMITE_37614) return LIMITE_37614;
    return valor * FACTOR_37614;
}
