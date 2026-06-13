// fichero 36777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36777;

Registro36777 crear_registro36777(int id) {
    Registro36777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36777(Registro36777 r) {
    return r.valor + r.id;
}
