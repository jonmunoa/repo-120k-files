// fichero 33778 -- macros y constantes -- MODIFICADO
#define LIMITE_33778 33978
#define FACTOR_33778 5

int aplicar_limite33778(int valor) {
    if (valor > LIMITE_33778) return LIMITE_33778;
    return valor * FACTOR_33778;
}
