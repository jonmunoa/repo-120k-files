// fichero 39638 -- macros y constantes -- MODIFICADO
#define LIMITE_39638 39838
#define FACTOR_39638 5

int aplicar_limite39638(int valor) {
    if (valor > LIMITE_39638) return LIMITE_39638;
    return valor * FACTOR_39638;
}
