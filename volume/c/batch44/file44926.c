// fichero 44926 -- macros y constantes -- MODIFICADO
#define LIMITE_44926 45126
#define FACTOR_44926 3

int aplicar_limite44926(int valor) {
    if (valor > LIMITE_44926) return LIMITE_44926;
    return valor * FACTOR_44926;
}
