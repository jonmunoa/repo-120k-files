// fichero 24938 -- macros y constantes -- MODIFICADO
#define LIMITE_24938 25138
#define FACTOR_24938 5

int aplicar_limite24938(int valor) {
    if (valor > LIMITE_24938) return LIMITE_24938;
    return valor * FACTOR_24938;
}
