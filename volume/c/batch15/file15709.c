// fichero 15709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15709;

Registro15709 crear_registro15709(int id) {
    Registro15709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
