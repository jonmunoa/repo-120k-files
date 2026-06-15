// fichero 34066 -- macros y constantes -- MODIFICADO
#define LIMITE_34066 34266
#define FACTOR_34066 3

int aplicar_limite34066(int valor) {
    if (valor > LIMITE_34066) return LIMITE_34066;
    return valor * FACTOR_34066;
}
