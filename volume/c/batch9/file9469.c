// fichero 9469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9469;

Registro9469 crear_registro9469(int id) {
    Registro9469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
