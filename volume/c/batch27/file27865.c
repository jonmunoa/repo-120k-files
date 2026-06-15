// fichero 27865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27865;

Registro27865 crear_registro27865(int id) {
    Registro27865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
