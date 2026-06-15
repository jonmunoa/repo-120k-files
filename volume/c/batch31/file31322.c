// fichero 31322 -- macros y constantes -- MODIFICADO
#define LIMITE_31322 31522
#define FACTOR_31322 4

int aplicar_limite31322(int valor) {
    if (valor > LIMITE_31322) return LIMITE_31322;
    return valor * FACTOR_31322;
}
