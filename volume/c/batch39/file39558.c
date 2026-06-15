// fichero 39558 -- macros y constantes -- MODIFICADO
#define LIMITE_39558 39758
#define FACTOR_39558 5

int aplicar_limite39558(int valor) {
    if (valor > LIMITE_39558) return LIMITE_39558;
    return valor * FACTOR_39558;
}
