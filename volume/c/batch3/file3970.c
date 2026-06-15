// fichero 3970 -- macros y constantes -- MODIFICADO
#define LIMITE_3970 4170
#define FACTOR_3970 2

int aplicar_limite3970(int valor) {
    if (valor > LIMITE_3970) return LIMITE_3970;
    return valor * FACTOR_3970;
}
