// fichero 34014 -- macros y constantes -- MODIFICADO
#define LIMITE_34014 34214
#define FACTOR_34014 6

int aplicar_limite34014(int valor) {
    if (valor > LIMITE_34014) return LIMITE_34014;
    return valor * FACTOR_34014;
}
