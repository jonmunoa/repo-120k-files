// fichero 49678 -- macros y constantes -- MODIFICADO
#define LIMITE_49678 49878
#define FACTOR_49678 5

int aplicar_limite49678(int valor) {
    if (valor > LIMITE_49678) return LIMITE_49678;
    return valor * FACTOR_49678;
}
