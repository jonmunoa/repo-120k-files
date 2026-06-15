// fichero 49322 -- macros y constantes -- MODIFICADO
#define LIMITE_49322 49522
#define FACTOR_49322 4

int aplicar_limite49322(int valor) {
    if (valor > LIMITE_49322) return LIMITE_49322;
    return valor * FACTOR_49322;
}
