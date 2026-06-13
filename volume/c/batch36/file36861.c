// fichero 36861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36861;

Registro36861 crear_registro36861(int id) {
    Registro36861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36861(Registro36861 r) {
    return r.valor + r.id;
}
