// fichero 1009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1009;

Registro1009 crear_registro1009(int id) {
    Registro1009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
