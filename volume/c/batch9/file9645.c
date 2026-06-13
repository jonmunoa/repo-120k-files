// fichero 9645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9645;

Registro9645 crear_registro9645(int id) {
    Registro9645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9645(Registro9645 r) {
    return r.valor + r.id;
}
