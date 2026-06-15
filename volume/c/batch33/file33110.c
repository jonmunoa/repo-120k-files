// fichero 33110 -- macros y constantes -- MODIFICADO
#define LIMITE_33110 33310
#define FACTOR_33110 2

int aplicar_limite33110(int valor) {
    if (valor > LIMITE_33110) return LIMITE_33110;
    return valor * FACTOR_33110;
}
