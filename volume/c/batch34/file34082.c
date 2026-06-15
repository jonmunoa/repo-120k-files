// fichero 34082 -- macros y constantes -- MODIFICADO
#define LIMITE_34082 34282
#define FACTOR_34082 4

int aplicar_limite34082(int valor) {
    if (valor > LIMITE_34082) return LIMITE_34082;
    return valor * FACTOR_34082;
}
