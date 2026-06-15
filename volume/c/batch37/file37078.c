// fichero 37078 -- macros y constantes -- MODIFICADO
#define LIMITE_37078 37278
#define FACTOR_37078 5

int aplicar_limite37078(int valor) {
    if (valor > LIMITE_37078) return LIMITE_37078;
    return valor * FACTOR_37078;
}
