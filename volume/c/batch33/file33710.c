// fichero 33710 -- macros y constantes -- MODIFICADO
#define LIMITE_33710 33910
#define FACTOR_33710 2

int aplicar_limite33710(int valor) {
    if (valor > LIMITE_33710) return LIMITE_33710;
    return valor * FACTOR_33710;
}
