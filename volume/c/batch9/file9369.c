// fichero 9369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9369;

Registro9369 crear_registro9369(int id) {
    Registro9369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
