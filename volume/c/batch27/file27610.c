// fichero 27610 -- macros y constantes -- MODIFICADO
#define LIMITE_27610 27810
#define FACTOR_27610 2

int aplicar_limite27610(int valor) {
    if (valor > LIMITE_27610) return LIMITE_27610;
    return valor * FACTOR_27610;
}
