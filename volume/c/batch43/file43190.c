// fichero 43190 -- macros y constantes -- MODIFICADO
#define LIMITE_43190 43390
#define FACTOR_43190 2

int aplicar_limite43190(int valor) {
    if (valor > LIMITE_43190) return LIMITE_43190;
    return valor * FACTOR_43190;
}
