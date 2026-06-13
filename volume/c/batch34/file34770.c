// fichero 34770 -- macros y constantes
#define LIMITE_34770 34870
#define FACTOR_34770 1

int aplicar_limite34770(int valor) {
    if (valor > LIMITE_34770) return LIMITE_34770;
    return valor * FACTOR_34770;
}
