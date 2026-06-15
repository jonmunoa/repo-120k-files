// fichero 31778 -- macros y constantes -- MODIFICADO
#define LIMITE_31778 31978
#define FACTOR_31778 5

int aplicar_limite31778(int valor) {
    if (valor > LIMITE_31778) return LIMITE_31778;
    return valor * FACTOR_31778;
}
