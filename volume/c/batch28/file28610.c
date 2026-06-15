// fichero 28610 -- macros y constantes -- MODIFICADO
#define LIMITE_28610 28810
#define FACTOR_28610 2

int aplicar_limite28610(int valor) {
    if (valor > LIMITE_28610) return LIMITE_28610;
    return valor * FACTOR_28610;
}
