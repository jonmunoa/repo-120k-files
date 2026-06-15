// fichero 32526 -- macros y constantes -- MODIFICADO
#define LIMITE_32526 32726
#define FACTOR_32526 3

int aplicar_limite32526(int valor) {
    if (valor > LIMITE_32526) return LIMITE_32526;
    return valor * FACTOR_32526;
}
