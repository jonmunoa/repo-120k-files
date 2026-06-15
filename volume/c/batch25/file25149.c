// fichero 25149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25149;

Registro25149 crear_registro25149(int id) {
    Registro25149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
