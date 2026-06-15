// fichero 37638 -- macros y constantes -- MODIFICADO
#define LIMITE_37638 37838
#define FACTOR_37638 5

int aplicar_limite37638(int valor) {
    if (valor > LIMITE_37638) return LIMITE_37638;
    return valor * FACTOR_37638;
}
