// fichero 53634 -- macros y constantes
#define LIMITE_53634 53734
#define FACTOR_53634 5

int aplicar_limite53634(int valor) {
    if (valor > LIMITE_53634) return LIMITE_53634;
    return valor * FACTOR_53634;
}
