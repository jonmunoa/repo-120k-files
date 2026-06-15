// fichero 47638 -- macros y constantes -- MODIFICADO
#define LIMITE_47638 47838
#define FACTOR_47638 5

int aplicar_limite47638(int valor) {
    if (valor > LIMITE_47638) return LIMITE_47638;
    return valor * FACTOR_47638;
}
