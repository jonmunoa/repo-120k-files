// fichero 24505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24505;

Registro24505 crear_registro24505(int id) {
    Registro24505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
