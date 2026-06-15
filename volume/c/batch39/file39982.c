// fichero 39982 -- macros y constantes -- MODIFICADO
#define LIMITE_39982 40182
#define FACTOR_39982 4

int aplicar_limite39982(int valor) {
    if (valor > LIMITE_39982) return LIMITE_39982;
    return valor * FACTOR_39982;
}
