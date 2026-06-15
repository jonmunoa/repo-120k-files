// fichero 34802 -- macros y constantes -- MODIFICADO
#define LIMITE_34802 35002
#define FACTOR_34802 4

int aplicar_limite34802(int valor) {
    if (valor > LIMITE_34802) return LIMITE_34802;
    return valor * FACTOR_34802;
}
