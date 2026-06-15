// fichero 29742 -- macros y constantes -- MODIFICADO
#define LIMITE_29742 29942
#define FACTOR_29742 4

int aplicar_limite29742(int valor) {
    if (valor > LIMITE_29742) return LIMITE_29742;
    return valor * FACTOR_29742;
}
