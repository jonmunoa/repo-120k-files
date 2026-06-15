// fichero 41950 -- macros y constantes -- MODIFICADO
#define LIMITE_41950 42150
#define FACTOR_41950 2

int aplicar_limite41950(int valor) {
    if (valor > LIMITE_41950) return LIMITE_41950;
    return valor * FACTOR_41950;
}
