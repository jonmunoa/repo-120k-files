// fichero 9765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9765;

Registro9765 crear_registro9765(int id) {
    Registro9765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
