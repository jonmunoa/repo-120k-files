// fichero 34926 -- macros y constantes -- MODIFICADO
#define LIMITE_34926 35126
#define FACTOR_34926 3

int aplicar_limite34926(int valor) {
    if (valor > LIMITE_34926) return LIMITE_34926;
    return valor * FACTOR_34926;
}
