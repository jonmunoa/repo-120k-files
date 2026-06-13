// fichero 37602 -- macros y constantes
#define LIMITE_37602 37702
#define FACTOR_37602 3

int aplicar_limite37602(int valor) {
    if (valor > LIMITE_37602) return LIMITE_37602;
    return valor * FACTOR_37602;
}
