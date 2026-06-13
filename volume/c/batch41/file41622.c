// fichero 41622 -- macros y constantes
#define LIMITE_41622 41722
#define FACTOR_41622 3

int aplicar_limite41622(int valor) {
    if (valor > LIMITE_41622) return LIMITE_41622;
    return valor * FACTOR_41622;
}
