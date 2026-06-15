// fichero 33738 -- macros y constantes -- MODIFICADO
#define LIMITE_33738 33938
#define FACTOR_33738 5

int aplicar_limite33738(int valor) {
    if (valor > LIMITE_33738) return LIMITE_33738;
    return valor * FACTOR_33738;
}
