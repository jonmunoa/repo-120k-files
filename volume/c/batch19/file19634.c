// fichero 19634 -- macros y constantes -- MODIFICADO
#define LIMITE_19634 19834
#define FACTOR_19634 6

int aplicar_limite19634(int valor) {
    if (valor > LIMITE_19634) return LIMITE_19634;
    return valor * FACTOR_19634;
}
