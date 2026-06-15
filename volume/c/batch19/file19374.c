// fichero 19374 -- macros y constantes -- MODIFICADO
#define LIMITE_19374 19574
#define FACTOR_19374 6

int aplicar_limite19374(int valor) {
    if (valor > LIMITE_19374) return LIMITE_19374;
    return valor * FACTOR_19374;
}
