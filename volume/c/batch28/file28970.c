// fichero 28970 -- macros y constantes -- MODIFICADO
#define LIMITE_28970 29170
#define FACTOR_28970 2

int aplicar_limite28970(int valor) {
    if (valor > LIMITE_28970) return LIMITE_28970;
    return valor * FACTOR_28970;
}
