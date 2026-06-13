// fichero 21154 -- macros y constantes
#define LIMITE_21154 21254
#define FACTOR_21154 5

int aplicar_limite21154(int valor) {
    if (valor > LIMITE_21154) return LIMITE_21154;
    return valor * FACTOR_21154;
}
