// fichero 21697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21697;

Registro21697 crear_registro21697(int id) {
    Registro21697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
