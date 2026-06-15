// fichero 24865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24865;

Registro24865 crear_registro24865(int id) {
    Registro24865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
