// fichero 34770 -- macros y constantes -- MODIFICADO
#define LIMITE_34770 34970
#define FACTOR_34770 2

int aplicar_limite34770(int valor) {
    if (valor > LIMITE_34770) return LIMITE_34770;
    return valor * FACTOR_34770;
}
