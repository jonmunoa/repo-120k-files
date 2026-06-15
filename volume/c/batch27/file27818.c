// fichero 27818 -- macros y constantes -- MODIFICADO
#define LIMITE_27818 28018
#define FACTOR_27818 5

int aplicar_limite27818(int valor) {
    if (valor > LIMITE_27818) return LIMITE_27818;
    return valor * FACTOR_27818;
}
