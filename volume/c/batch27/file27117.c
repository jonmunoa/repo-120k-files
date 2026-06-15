// fichero 27117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27117;

Registro27117 crear_registro27117(int id) {
    Registro27117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
