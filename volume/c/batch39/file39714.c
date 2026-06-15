// fichero 39714 -- macros y constantes -- MODIFICADO
#define LIMITE_39714 39914
#define FACTOR_39714 6

int aplicar_limite39714(int valor) {
    if (valor > LIMITE_39714) return LIMITE_39714;
    return valor * FACTOR_39714;
}
