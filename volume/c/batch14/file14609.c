// fichero 14609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14609;

Registro14609 crear_registro14609(int id) {
    Registro14609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
