// fichero 19982 -- macros y constantes -- MODIFICADO
#define LIMITE_19982 20182
#define FACTOR_19982 4

int aplicar_limite19982(int valor) {
    if (valor > LIMITE_19982) return LIMITE_19982;
    return valor * FACTOR_19982;
}
