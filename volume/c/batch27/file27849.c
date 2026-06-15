// fichero 27849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27849;

Registro27849 crear_registro27849(int id) {
    Registro27849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
