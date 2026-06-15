// fichero 41558 -- macros y constantes -- MODIFICADO
#define LIMITE_41558 41758
#define FACTOR_41558 5

int aplicar_limite41558(int valor) {
    if (valor > LIMITE_41558) return LIMITE_41558;
    return valor * FACTOR_41558;
}
