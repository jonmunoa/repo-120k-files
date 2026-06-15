// fichero 21686 -- macros y constantes -- MODIFICADO
#define LIMITE_21686 21886
#define FACTOR_21686 3

int aplicar_limite21686(int valor) {
    if (valor > LIMITE_21686) return LIMITE_21686;
    return valor * FACTOR_21686;
}
