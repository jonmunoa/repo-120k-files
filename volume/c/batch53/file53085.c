// fichero 53085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53085;

Registro53085 crear_registro53085(int id) {
    Registro53085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53085(Registro53085 r) {
    return r.valor + r.id;
}
