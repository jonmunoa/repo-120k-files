// fichero 2610 -- macros y constantes -- MODIFICADO
#define LIMITE_2610 2810
#define FACTOR_2610 2

int aplicar_limite2610(int valor) {
    if (valor > LIMITE_2610) return LIMITE_2610;
    return valor * FACTOR_2610;
}
