// fichero 15809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15809;

Registro15809 crear_registro15809(int id) {
    Registro15809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15809(Registro15809 r) {
    return r.valor + r.id;
}
