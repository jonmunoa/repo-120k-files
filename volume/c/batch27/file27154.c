// fichero 27154 -- macros y constantes -- MODIFICADO
#define LIMITE_27154 27354
#define FACTOR_27154 6

int aplicar_limite27154(int valor) {
    if (valor > LIMITE_27154) return LIMITE_27154;
    return valor * FACTOR_27154;
}
