// fichero 35646 -- macros y constantes -- MODIFICADO
#define LIMITE_35646 35846
#define FACTOR_35646 3

int aplicar_limite35646(int valor) {
    if (valor > LIMITE_35646) return LIMITE_35646;
    return valor * FACTOR_35646;
}
