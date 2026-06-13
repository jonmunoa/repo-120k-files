// fichero 3697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3697;

Registro3697 crear_registro3697(int id) {
    Registro3697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3697(Registro3697 r) {
    return r.valor + r.id;
}
