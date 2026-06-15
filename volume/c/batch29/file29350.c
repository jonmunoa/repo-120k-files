// fichero 29350 -- macros y constantes -- MODIFICADO
#define LIMITE_29350 29550
#define FACTOR_29350 2

int aplicar_limite29350(int valor) {
    if (valor > LIMITE_29350) return LIMITE_29350;
    return valor * FACTOR_29350;
}
