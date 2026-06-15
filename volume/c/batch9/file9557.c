// fichero 9557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9557;

Registro9557 crear_registro9557(int id) {
    Registro9557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
