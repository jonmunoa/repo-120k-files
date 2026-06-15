// fichero 31865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31865;

Registro31865 crear_registro31865(int id) {
    Registro31865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
