// fichero 33918 -- macros y constantes -- MODIFICADO
#define LIMITE_33918 34118
#define FACTOR_33918 5

int aplicar_limite33918(int valor) {
    if (valor > LIMITE_33918) return LIMITE_33918;
    return valor * FACTOR_33918;
}
