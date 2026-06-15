// fichero 38970 -- macros y constantes -- MODIFICADO
#define LIMITE_38970 39170
#define FACTOR_38970 2

int aplicar_limite38970(int valor) {
    if (valor > LIMITE_38970) return LIMITE_38970;
    return valor * FACTOR_38970;
}
