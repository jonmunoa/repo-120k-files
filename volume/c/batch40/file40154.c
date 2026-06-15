// fichero 40154 -- macros y constantes -- MODIFICADO
#define LIMITE_40154 40354
#define FACTOR_40154 6

int aplicar_limite40154(int valor) {
    if (valor > LIMITE_40154) return LIMITE_40154;
    return valor * FACTOR_40154;
}
