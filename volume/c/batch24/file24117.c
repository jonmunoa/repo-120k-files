// fichero 24117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24117;

Registro24117 crear_registro24117(int id) {
    Registro24117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
