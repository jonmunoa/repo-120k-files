// fichero 31837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31837;

Registro31837 crear_registro31837(int id) {
    Registro31837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
