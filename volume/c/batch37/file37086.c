// fichero 37086 -- macros y constantes -- MODIFICADO
#define LIMITE_37086 37286
#define FACTOR_37086 3

int aplicar_limite37086(int valor) {
    if (valor > LIMITE_37086) return LIMITE_37086;
    return valor * FACTOR_37086;
}
