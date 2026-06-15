// fichero 40593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40593;

Registro40593 crear_registro40593(int id) {
    Registro40593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
