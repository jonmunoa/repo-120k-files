// fichero 40249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40249;

Registro40249 crear_registro40249(int id) {
    Registro40249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
