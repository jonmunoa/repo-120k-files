// fichero 46634 -- macros y constantes -- MODIFICADO
#define LIMITE_46634 46834
#define FACTOR_46634 6

int aplicar_limite46634(int valor) {
    if (valor > LIMITE_46634) return LIMITE_46634;
    return valor * FACTOR_46634;
}
