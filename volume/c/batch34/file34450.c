// fichero 34450 -- macros y constantes -- MODIFICADO
#define LIMITE_34450 34650
#define FACTOR_34450 2

int aplicar_limite34450(int valor) {
    if (valor > LIMITE_34450) return LIMITE_34450;
    return valor * FACTOR_34450;
}
