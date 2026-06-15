// fichero 31193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31193;

Registro31193 crear_registro31193(int id) {
    Registro31193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
