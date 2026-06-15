// fichero 37602 -- macros y constantes -- MODIFICADO
#define LIMITE_37602 37802
#define FACTOR_37602 4

int aplicar_limite37602(int valor) {
    if (valor > LIMITE_37602) return LIMITE_37602;
    return valor * FACTOR_37602;
}
