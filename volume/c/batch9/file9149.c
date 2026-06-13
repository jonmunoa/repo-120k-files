// fichero 9149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9149;

Registro9149 crear_registro9149(int id) {
    Registro9149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9149(Registro9149 r) {
    return r.valor + r.id;
}
