// fichero 9770 -- macros y constantes -- MODIFICADO
#define LIMITE_9770 9970
#define FACTOR_9770 2

int aplicar_limite9770(int valor) {
    if (valor > LIMITE_9770) return LIMITE_9770;
    return valor * FACTOR_9770;
}
