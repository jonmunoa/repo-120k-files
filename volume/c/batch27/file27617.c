// fichero 27617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27617;

Registro27617 crear_registro27617(int id) {
    Registro27617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
