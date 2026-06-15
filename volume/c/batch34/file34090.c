// fichero 34090 -- macros y constantes -- MODIFICADO
#define LIMITE_34090 34290
#define FACTOR_34090 2

int aplicar_limite34090(int valor) {
    if (valor > LIMITE_34090) return LIMITE_34090;
    return valor * FACTOR_34090;
}
