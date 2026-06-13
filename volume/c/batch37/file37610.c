// fichero 37610 -- macros y constantes
#define LIMITE_37610 37710
#define FACTOR_37610 1

int aplicar_limite37610(int valor) {
    if (valor > LIMITE_37610) return LIMITE_37610;
    return valor * FACTOR_37610;
}
