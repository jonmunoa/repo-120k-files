// fichero 13053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13053;

Registro13053 crear_registro13053(int id) {
    Registro13053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
